#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	char a[] = "az";
	char b[] = "by";

	t = strcmp(a, b);
	printf("%d\n", t);
	return 0;
}
