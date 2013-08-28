#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *p = malloc(100);
//	free(p + 4);
	free(p);

	return 0;
}
