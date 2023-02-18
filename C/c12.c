#include <stdio.h>
int f12(int b[][3])
{
	return (++b)[0][1];
}
int main12(void)
{
	int a[3][3] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9} };
	printf("%d", f12(a));
	return 0;
}