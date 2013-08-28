#include <stdio.h>

long long recursion(int x)
{
	long long result;

	if (x == 0 )
		result = 1;
	else
		result = x*recursion(x - 1);
	
	return result;
}

int main(void)
{
	int n;
	long long result;

	printf("input a number:\n");
	scanf("%d", &n);

	result = recursion(n);

	printf("%d! = %lld\n", n, result);

	return 0;
}
