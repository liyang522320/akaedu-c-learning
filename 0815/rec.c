#include <stdio.h>

long rec(int x, int n)
{
	long result;
	int tmp = 1, i;

	for(i = 0; i< n; i++)
		tmp *= x; 	
	if (n % 2 == 0)
		result += rec
	
}

int main(void)
{
	int x, n;
	long result;

	printf("input x and n:");
	scanf("%d%d", &x, &n);


	return 0;
}
