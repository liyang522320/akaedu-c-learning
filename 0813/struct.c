#include <stdio.h>

#define OFFSET(member)  (&(((struct text*)0)->member))
 
struct text {
	char a;
	short b;
	int c;
	char d;
}__attribute__((packed))s;

int main(void)
{
	printf("sizeof = %d\n", sizeof(s));
	printf("&a = %p\n", OFFSET(a));
	printf("&b = %p\n", OFFSET(b));
	printf("&c = %p\n", OFFSET(c));
	printf("&d = %p\n", OFFSET(d));

	return 0;
}
