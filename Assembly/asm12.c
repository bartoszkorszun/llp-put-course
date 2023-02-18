#include <stdio.h>
int main12(void)
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
		mov cl,[esp+34]
		mov c,cl
		add esp,60
	}
	printf("%d", c);
	return 0;
}