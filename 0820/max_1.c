#include <stdio.h>

int max(int a, ...)
{
	int *p = NULL;
	int max = 0;

	p = &a;

	while (*p) {
		if (*p > max)
			max = *p;
		p++;
		printf("*p++ = %d\n", *p);
	}

	putchar('\n');

	return max;
}

int main(void)
{
	int ret;

	ret = max(1, 3, 5, 7, 9, 10, 26, 29, 33, 30, 0);
	printf("max = %d\n", ret);

	ret = max(12, 34, 456, 756, 123, 354, 213, 34, 43, 23, 434, 234, 0);
	printf("max = %d\n", ret);

	ret = max(11, 123, 12, 35, 43, 12, 0);
	printf("max = %d\n", ret);

	ret = max(1, 0);
	printf("max = %d\n", ret);

	ret = max(0);
	printf("max = %d\n", ret);

	return 0;
}
