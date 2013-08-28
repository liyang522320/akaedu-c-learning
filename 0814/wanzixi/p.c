#include <stdio.h>

int main(void)
{
	char a[10];

	*a = getchar(); 
	putchar(*a);

	printf("%p\n", NULL);

	return 0;
}
