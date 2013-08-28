#include <stdio.h>

int main(void)
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	int *p, i;

	p = a;
	for (i = 0; i < 10; i++)
		printf("%d\t", *(p++));
	putchar('\n');

	return 0;
}
