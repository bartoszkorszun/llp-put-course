#include <stdio.h>
int main05(void)
{
	int c;
	__asm
	{
		mov eax,0x10101010
		mov ebx,eax
		or ebx,0x01010101
		xor ax,bx
		xor bx,ax
		xor ax,bx
		mov c,eax
	}
	printf("%08x", c);
	return 0;
}