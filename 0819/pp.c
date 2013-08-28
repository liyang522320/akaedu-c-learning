# include <stdio.h>

int main(void)
{
	int **ppi;
	
	ppi = (int **)0x1000;
	ppi = (int **)0x804a010;

	printf("1 finished!\n");

	*ppi = 0x804a050;
	printf("1 finished!\n");

	**ppi = 0x2000;
	printf("3 finished!\n");

	return 0;
}
