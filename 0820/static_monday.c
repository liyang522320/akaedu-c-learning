#include <stdio.h>
 
int c(int a)
{
	static int b;
	b = a;

	return b;
}

int main(void)
{
	int a = 10;
	int d = 20;

	printf("%d\t%d\n", c(a), c(d));	

	return 0;
}

