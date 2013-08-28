#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *p;
	int size;

	printf("demo malloc\n");
	printf("%#x\n",43);
		
	printf("p = %p\n", p);
	p = malloc(4);
	printf("p = %p\n", p);
	free(p);

	p = malloc(4);
	printf("p = %p\n", p);

	p =malloc(13);
	printf("p = %p\n", p);

	p = malloc(4);
	printf("p = %p\n", p);

	return 0;
}
