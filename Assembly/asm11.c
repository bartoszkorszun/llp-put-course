#include <stdio.h>
int main11(void)
{
	unsigned short int c;
	__asm
	{
		mov ax,49
		mov bx,15
		sub dx,dx
	l1: loop l1
	l2: div bx
		add cx,dx
		xor dx,dx
		or ax,ax
		jne l2
		mov c,cx
	}
	printf("%hu", c);
	return 0;
}