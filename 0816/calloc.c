#include <stdio.h>
#include <stdlib.h>
struct STU {
	char name[10];
	int id;
	char sex;
};

int main(int argc, char *argv[])
{
	char *p;
	//p = malloc(60);
	p = calloc (3, sizeof(struct STU));
	//realloc(p, 0);   等价于下边free(p);
	//p = realloc(NULL, 100);    等价于malloc();
	free(p);

	return 0;
}
