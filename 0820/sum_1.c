#include <stdio.h>

int sum(int a, ...)
{
	int sum = 0;
	int *p = &a;
	
	while (*p) {
		sum += *p;
		p++;
		if (*p != 0) {
		printf("*p++ = %d\n", *p);
		}
	}

	putchar('\n');
	
	return sum;
}

int main(void)
{
	int i;
	int ret;
	
	ret = sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0);
	printf("ret = %d\n", ret);

	ret = sum(1, 3, 4, 5, 0);
	printf("ret = %d\n", ret);

	ret = sum(2, 4, 6, 8, 10, 12, 0);
	printf("ret = %d\n", ret);

	return 0;
}
