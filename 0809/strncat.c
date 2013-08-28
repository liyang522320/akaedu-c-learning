#include <stdio.h>
#include <string.h>

int main(void)
{
	char d[10] = "xiaorui";
	char s[10] = "liyang";

	strncat(d, s, 2);
	printf("%s %s\n", d, s);

	return 0;
}
