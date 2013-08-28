# include <stdio.h>
int main(void)
{
	int a, d;
	int b = 11, c = 5;

	a = b & c;
	d = b && c;
	printf("b & c = %d\n", a);
	printf("b && c = %d\n", d);

	return 0;
}
