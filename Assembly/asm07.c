#include <stdio.h>
int main07(void)
{
	unsigned c;
	__asm
	{
		mov eax,5
		mov edx,6
		call l_a
		add dx,ax
		add ax,dx
		jmp l_end
	l_a: mul eax
		call l_b
	l_b: pop ebx
		ret
	l_end: mov c,eax
	}
	printf("%u", c);
	return 0;
}