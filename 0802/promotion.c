# include <stdio.h>
int main(void)
{
	int i;
//	unsigned char c = 0xfc;
//	unsigned int i = ~c;
//	char c = 0xfc;
	char c = 0x8c;
	char int i = ~c;
	
	printf("c = 0x%x, i = 0x%x\n", c, i);

	return 0;
}
