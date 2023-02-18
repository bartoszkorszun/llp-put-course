#include <stdio.h>
int x = 2, b, c, d;
int main13(void)
{
	c = x, b;
	d = (x, b);
	printf("%d %d", c, d);
	return 0;
}