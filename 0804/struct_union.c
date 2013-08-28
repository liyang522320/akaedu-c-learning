#include <stdio.h>
union
{
	struct
	{
		unsigned short low;
		unsigned short high;
	}x;
	unsigned int y;
}num;

int main(void)
{
	num.y = 0x11223344;
	printf("%x\n", (num.x.low + num.x.high));

/*********************************************/

	unsigned int i = 0x11223344;

	printf("%x\n", ((i >> 16) + (i & 0xffff)));

	return 0;
}
