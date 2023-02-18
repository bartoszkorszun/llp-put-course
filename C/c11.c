#include <stdio.h>
int main11(void)
{
	int a[][2] = { 1, 2, 3, 4, 5, 6 };
	int(*ptr)[2] = a + 1;
	printf("%d %d ", (*ptr)[0], (*ptr)[1]);
	++ptr;
	printf("%d %d", (*ptr)[0], (*ptr)[1]);
	return 0;
}