#include <stdio.h>
int counter10(int i)
{
	static int count = 1;
	count -= i;
	return count;
}
int main10(void)
{
	int j;
	for (int i = 0; i <= 5; i++)j = counter10(i);
	printf("%d", j);
	return 0;
}