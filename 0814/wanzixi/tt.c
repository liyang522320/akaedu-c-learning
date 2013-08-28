#include <stdio.h>

int main(void)
{
	int a;
	char b;


	scanf("%d", &a);
	scanf("%*d");
	scanf("%c", &b);
	
	printf("%d\t%c\n", a, b);

	return 0;
}
