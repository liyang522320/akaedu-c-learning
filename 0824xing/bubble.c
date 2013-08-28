#include <stdio.h>
#include <stdlib.h>

#define N   10000
#define MAX 10000

void init_array(int a[], int len)
{
	int i;

	srand(time(NULL));
	for (i = 0; i < len; i++)
		a[i] = rand() % MAX;
}

void show_array(int a[], int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%3d", a[i]);
	putchar('\n');

}

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

void bubble_sort(int a[], int len)
{
	int i, j;

	for (i = 0; i < len; i++)
		for (j = len; j > i; j--)
			if (a[j - 1] > a[j])
				swap(&a[j - 1], &a[j]);
	
}

int main(void)
{
	int a[N];

	init_array(a, N);
	show_array(a, N);
	bubble_sort(a, N);
	show_array(a, N);

	return 0;
}
