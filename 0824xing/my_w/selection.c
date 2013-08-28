#include <stdio.h>

#define  N   16
#define  MAX 100

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

void select_sort(int a[], int len)
{
	int i, j, min;

	for (i = 0; i < len; i++) {
		min = i;
		for (j = i + 1; j < len; j++)
			if (a[min] > a[j])
				min = j;
		swap(&a[i], &a[min]);
	}


#if 0
	for (i = 0; i < len; i++) {
		min = i;
		for (j = i + 1; j < len; j++)
			if (a[min] > a[j])
				min = j;
		swap(&a[i], &a[min]);
	}
#endif
}

int main(void)
{
	int a[N];

	init_array(a, N);	
	show_array(a, N);
	select_sort(a, N);
	show_array(a, N);

	return 0;
}
