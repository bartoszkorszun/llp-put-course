#include <stdio.h>
int main08(void)
{
	int c;
	__asm
	{
		mov eax, 0x43
	l0: cmp ax,0x10
		jle l1
		sar eax,1
		jmp l0
	l1: mov c,eax
	}
	printf("%x", c);
	return 0;
}