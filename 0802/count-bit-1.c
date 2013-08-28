# include <stdio.h>
int count_bit_1(int num)
{
	int counter = 0;
	int i;

	for (i = 0; i < 32; i++)
		if (num & (1 << i))
			counter++;

	return counter;
}
int main(void)
{
	int ret = 0, i;

	printf("demo count bit 1\n");
	for(i = 1; i <= 100; i++) {
		ret += count_bit_1(i);
	}
	printf("1--100 has %d bit 1\n", ret);

	return 0;
}
