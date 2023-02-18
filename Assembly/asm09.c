#include <stdio.h>
int main09(void)
{
	int c;
	__asm
	{
		mov eax,2
		mov ebx,13
		mov ecx,eax
		mov edx,ebx
	l_loop: cmp ecx,edx
		je l_fini
		jg l_else
		add ecx,eax
		jmp l_loop
	l_else: add edx,ebx
		jmp l_loop
	l_fini: mov c,ecx
	}
	printf("%d", c);
	return 0;
}