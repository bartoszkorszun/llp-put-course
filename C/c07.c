#include <stdio.h>
#include <stdarg.h>
int r07(int n, ...)
{
	int i, j = 1, k = 0;
	va_list p;
	va_start(p, n);
	for (; j < n; ++j)
	{
		i = va_arg(p, int);
		for (; i; i &= i - 1)++k;
	}
	return k;
}
int main07(void)
{
	int num = r07(3, 5, 6);
	printf("%d", num);
	return 0;
}