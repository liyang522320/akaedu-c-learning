#include <stdio.h>
#include <string.h>

char *mystrtok(char *str, const char *delim)
{
	static char *begin = NULL;
	if (str != NULL) {
		begin = strstr(str, delim);
		while (begin == str)
		{
			str += strlen(delim);
			begin = strstr(str, delim);
		}
	}
	else {
		str = begin;
		if (str == NULL)
			return NULL;
		begin = strstr(str, delim);
		while (begin == str)  {
			str += strlen(delim);
			begin = strstr(str, delim);
		}
	}
	if (begin != NULL)	{
		memset(begin, 0, strlen(delim));
		begin += strlen(delim);
	}
	else if (*str == 0)
		return NULL;
	return str;
}

int main(void)
{
	char str[100] = "hello,world,akaedu; ccabg; asdljfasd,asjdlkg;aslkd:adskjgl;djkg";
	char *p;

	printf("%s\n", mystrtok(str,";"));	
	while (p = mystrtok(NULL, ";"))
		printf("%s\n", p);

	return 0;
}
