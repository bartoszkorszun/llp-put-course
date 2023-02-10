#include <stdio.h>
int main10(void)
{
	unsigned char c = 10;
	__asm
	{
		movzx ecx,c
	l1:
		push cx
		call l2
	l2:
		loop l1
		mov cl,[esp+22]
		mov c,cl
		add esp,60
	}
	printf("%d", c);
	return 0;
}