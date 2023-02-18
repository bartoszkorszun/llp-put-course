#include <stdio.h>
int main01(void) 
{
	int i = 5, j;
	j = sizeof(i++ + ++i);
	printf("%d %d", i, j);
	return 0;
}