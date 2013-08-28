# include <stdio.h>
int main(void)
{
	int arr[] = {2, 4, 9, 21, 98};
	int *p;
	int i;

//	p = &arr[0];
	p = arr;

	for (i = 0; i < sizeof(arr) / sizeof(*arr); i++)
		printf("%d ", p[i]);
	printf("\n");
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(*arr));

	return 0;
}
