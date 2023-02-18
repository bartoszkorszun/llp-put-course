#include <stdio.h>
void e02(int n)
{
	if (n > 0)
	{
		e02(--n);
		printf("%d", n);
		e02(--n);
	}
}
int main02(void)
{
	int a = 3;
	e02(a);
	return 0;
}