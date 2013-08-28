#include <stdio.h>
#include <stdlib.h>

char *names[] = 
{
	"liming",
	"zhangsan",
	"lisi",
	"wanger",
	"mazi"
};

int cmp_name(const void *s1, const void *s2)
{
	return strcmp(*(int *)s1, *(int *)s2);
}
int cmp_int(const void *s1, const void *s2)
{
	return *(int *)s1 - *(int *)s2;
}

int a[] = {12, 3, 67, 88, 105, 4};

int main(void)
{
	int i = 0;
	qsort(names, 5, 4, cmp_name);	

	for (i = 0; i < 5; i++)
		printf("names[%d] = %s\n", i, names[i]);

	qsort(a, 6, 4, cmp_int);
	for (i = 0; i < 6; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
