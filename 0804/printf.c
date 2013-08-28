#include <stdio.h>
int main(void)
{
	printf('\n' + 0x804a000);
	printf("\n");
	printf('\n' + 0x8048000);
	printf("\n");
	printf('\0' + 0x804a000);
	printf("\n");

	return 0;
}
