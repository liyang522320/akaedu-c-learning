# include <stdio.h>
int rand_produce(int a[], int n)
{
	int i, j, tmp;

	srand(time(NULL));
	for (i = 0; i < 54; i++)
		tmp = rand() % 54;
		for (j = 0; j < i; j++)
			if (a[i] == a[j])
				i = i - 1;
	for(i = 0; i < 54; i++)
	printf("%d\n", a[i]);
}
int main(void)
{
	int a[54];

	rand_produce(a, 54);

	return 0;
}
