#include <stdio.h>
int main08(void)
{
	char* p, buf[] = { 9, 3, 2, 4, 5, 6, 1, 8, 0, 7 };
	p = &(buf + 4)[5];
	printf("%c", 'a' + *p);
	return 0;
}