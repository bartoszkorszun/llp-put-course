#include <stdio.h>
void f06(char** p)
{
	char* t;
	t = (p += sizeof(int))[1];
	printf("%s", t);
}
int main06(void)
{
	char* argv[] = { "ab", "cd", "ef", "gh",
					"ij", "kl", "mn", "op",
					"qr", "st", "uv", "wx", "yz" };
	f06(argv);
	return 0;
}