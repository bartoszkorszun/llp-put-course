#include <stdio.h>
typedef struct node
{
	int a, b, c, d;
} node;
int main04(void)
{
	node s = { 9, 3, 5, 7 }, * pt = &s;
	printf("%d", ++(*(int*)pt));
	return 0;
}