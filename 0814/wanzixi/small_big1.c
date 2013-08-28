#include <stdio.h>

int main(void)
{
	char ch;

	scanf("%c", &ch);
	((ch >= 'a') && (ch <= 'z')) ? putchar(ch + 'A' - 'a') : putchar(ch);
	
	putchar('\n');

	return 0;
}
