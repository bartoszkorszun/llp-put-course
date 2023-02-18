#include <stdio.h>
int main10(void)
{
	unsigned char c = 10;
	__asm
	{
		movzx ecx,c
	l1:
		push ecx
		call l2
	l2:
		loop l1
		mov cl,[esp+16]
		mov c,cl
		add esp,80
	}
	printf("%d", c);
	return 0;
}