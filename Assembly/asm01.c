#include <stdio.h>
int main01(void)
{
	int c;
	__asm
	{
		mov eax,7
		push eax
		mov ebx,eax
		neg eax
		not ebx
		sub eax,ebx
		pop ebx
		add eax,ebx
		mov c,eax
	}
	printf("%d", c);
	return 0;
}