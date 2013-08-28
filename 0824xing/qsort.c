#include <stdio.h>
#include <stdlib.h>

#define N   16
#define MAX 100

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
		printf("%5d", a[i]);
	putchar('\n');

}

void merge(int a[], int l, int m, int r)
{
	int i, j, k, b[r + 1];
	for (i = l; i <= r; i++)
		b[i] = a[i];
	i = l; 
	j = m + 1;
	k = l;
	while (i <= m && j <= r)
		if (b[i] < b[j])
			a[k++] = b[i++];
		else
			a[k++] = b[j++];
	while (i <= m)
		a[k++] = b[i++];
	while (j <= r)
		a[k++] = b[j++];
}

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

int partition(int a[], int l, int r)
{
	int i, j;

	for (i = l + 1, j = l; i <= r; i++)
		if (a[i] < a[j])
			swap(&a[i], &a[++j]);
	swap(&a[j], &a[l]);
	return j;
}

void quick_sort(int a[], int l, int r)
{
	if (l >= r)
		return;
	int k = partition(a, l, r);
	quick_sort(a, l, k - 1);
	quick_sort(a, k + 1, r);
}

#if 0
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int a[], int l, int r)
{
	int i, j;
	for (i = l + 1, j = l; i <= r; i++) 
		if (a[i] < a[l])
			swap(&a[i], &a[++j]);
		swap(&a[j], &a[l]);
	return j;
	
}

void quick_sort(int a[], int l, int r)
{
	if (l >= r)	
		return;
	int k = partition(a, l, r);
	quick_sort(a, l, k - 1);
	quick_sort(a, k + 1, r);
}
#endif

int main(void)
{
	int a[N];

	init_array(a, N);
	show_array(a, N);
	quick_sort(a, 0, N - 1);
	show_array(a, N);

	return 0;
}
