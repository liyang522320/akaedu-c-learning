#include <stdio.h>

void input_num(int a[], int b, int c, int n)
{
	int i, j;

	for (i = b; i <= c; i++)
		for (j = 0; j < n; j++)
			a[j] = i;
}

int is_prime(int num)
{
	int i, j, flag = 0;
	
	for (i = 2; i < num; i++)
		if ((num % i) == 0) {
			flag = 1;
			break;
		}
		else
			continue;

	return flag;

}

void prime(int a[], int n)
{
	int i, flag = 0;

	for (i = 0; i < n; i++) {
		flag = is_prime(a[i]);
		if (flag)
			printf("%d\t", a[i]);
	}
}

int main(void)
{
	int a[1000];	
	int b, c;

	scanf("%d%d", &b, &c);

	input_num(a, b, c, 1000);
	prime(a, 1000);

	return 0;
}
