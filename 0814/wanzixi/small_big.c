#include <stdio.h>

int main(void)
{
	char ch;

	scanf("%c", &ch);
	if ((ch >= 'a') && (ch <= 'z'))
		ch += 'A' - 'a';

	printf("%c\n", ch);

	return 0;
}
