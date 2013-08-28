#include <stdio.h>
#include <string.h>

char *mystrcpy(char *dest, const char *src)
{
	char *ret = dest;
	if (dest != NULL && src != NULL) {
		while ((*dest++ = *src++) != '\0') {
			;
		}
	}
	return ret;
}

int main(void)
{
	char str1[] = "hello world";
	char str2[128];
	char *ret;

	ret = mystrcpy(str2, str1);
	
	puts(str1);
	puts(str2);
	puts(ret);

	return 0;
}
