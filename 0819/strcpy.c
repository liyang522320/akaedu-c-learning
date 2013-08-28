#include <stdio.h>

char *mystrcpy(char *dest, const char *src)
{
	char *ret = dest;
	if (dest != NULL && src !=NULL) {
		while ((*dest++ = *src++) != '\0') 
			;
	}

	return ret;
}

int main()
{
	char str1[] = "hello";
	char str2[128];
	char *ret;

	ret = mystrcpy(str2, str1);

	puts(str1);
	puts(str2);
	puts(ret);

	return 0;
}
