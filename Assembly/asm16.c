#include <stdio.h>
int main16(void)
{
	unsigned char c = 10;
	__asm
	{
		movzx ecx,c
	l1:
		push cx
		loop l1
		mov cl,[esp+16]
		mov c,cl
		add esp,20
	}
	printf("%d", c);
	return 0;
}