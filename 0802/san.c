# include <stdio.h>
int main(void)
{
//	unsigned int c = 0x8000000;
//	int c = 0x8000000;
	char c = 0xfc;

	printf("c = 0x%x\n", c);
	printf("c >> 1 = 0x%x\n", c >> 1);

	return 0;
}

