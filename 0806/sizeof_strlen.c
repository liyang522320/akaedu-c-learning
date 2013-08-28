#include <stdio.h>
#include <string.h>

	char str[11] = "hello world";
	char str1[4] ="good";

int main(void)
{

	printf("%s\n", str);
	printf("%s\n", str1);
	printf("sizeof(str) = %d\n", sizeof(str));
	printf("strlen(str) = %d\n", strlen(str));

	return 0;
}
