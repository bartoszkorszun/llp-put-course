#include <stdio.h>
int main02(void)
{
	int c;
	__asm
	{
		mov eax,3
	l0:	cmp ax,2
		jle l1
		add eax,2
		jmp l0
	l1: mov c,eax
	}
	printf("%x", c);
	return 0;
}