#include <stdio.h>
void f31(int* p, int q)
{
	int tmp = *p;
	*p = q;
	q = tmp;
}
void f32(int* p, int q)
{
	int tmp = *p;
	*p = q;
	q = tmp;
}
void (*p[2]) (int*, int);
int main03(void)
{
	int a = 4, b = 2;
	p[0] = f31;
	p[1] = f32;
	p[0](&a, b);
	printf("%d %d ", a, b);
	p[1](&a, b);
	printf("%d %d", a, b);
	return 0;
}