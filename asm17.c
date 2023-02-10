#include <stdio.h>
int main17(void)
{
	int c;
	__asm
	{
		mov eax,1
		call f0
		mov c,eax
		jmp f3
	f0: jmp f1
	f1: call f2
	f2: add eax,2
		ret
	f3: dec eax
	}
	printf("%d", c);
	return 0;
}