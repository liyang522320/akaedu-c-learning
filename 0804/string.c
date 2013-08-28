#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = "";
	char *p;

	printf("str = %s\n", str);

	p = str;
	printf("p = %p\n", p);

	p = "hello";
	printf("p = %p\n", p);
//	strcpy(p, "world");    //段错误

	printf("str = %s\n", p);
	printf("str = %s\n", str);

	return 0;
}
