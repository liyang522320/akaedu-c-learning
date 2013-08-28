#include <stdio.h>

int main(void)
{
	int a;
	char b;

	scanf("%d", &a);
	fflush(stdin);
	scanf("%c", &b);
	
	printf("%d\t%c\n", a, b);

	return 0;
}
