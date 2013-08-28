#include <stdio.h>
#include <string.h>

int counter(char str[], char substr[])
{
	char *tmp;
	int counter = 0;

	while (1) {
		if (tmp = strstr(str, substr)) {
			counter++;
			str = tmp + strlen(substr);
		}
		else
			break;
	}
	return counter;
}

int main(void)
{
	char str[30];
	char substr[30];
	int len, len2;
	int count;

	printf("input a string:\n");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	str[len - 1] = '\0';

	printf("input another string:\n");
	fgets(substr, sizeof(substr), stdin);
	len2 = strlen(substr);
	substr[len2 - 1] = '\0';

	count = counter(str, substr);
	printf("%d\n", count);
	return 0;
}
