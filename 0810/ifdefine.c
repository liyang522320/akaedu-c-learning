#include <stdio.h>

//#define DEBUG 0

int main(void)
{
#if DEBUG
	printf("debuf info....\n");
#endif

#ifndef DEBUG
	printf("2   debuf info....\n");
#elif MAX
	printf("3   debuf info....\n");
#endif

	return 0;
}
