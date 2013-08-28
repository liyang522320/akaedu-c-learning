#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%*d%d", &a, &b);

	printf("%d\t%d\n", a, b);

	return 0;
}
