#include <stdio.h>
int main05(void)
{
	int a[5] = { 1, 3, 5, 7, 9 };
	int* ptr = (int*)(&a + 1);
	printf("%d %d", *(&a[0] + 2), *(ptr - 1));
	return 0;
}