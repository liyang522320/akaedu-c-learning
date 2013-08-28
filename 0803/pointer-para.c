# include <stdio.h>

int main(void)
{
	double pi = 3.1415;
	int int_part;
	double frac_part;

	decompose(pi, int_part, frac_part);

	printf("int_part = %d\n", int_part);
	printf("frac_part = %d\n", frac_part);

	return 0;
}
