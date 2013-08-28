#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0, j, count = 0, line = 0, len;
	char buf[1000];
	char word[1000];
	char ch;
	char *p;
	
	while (1)
	{
		p = fgets(buf, 1000, stdin);
		if (p == NULL)
			break;
			//puts(buf);
			line++;
			len = strlen(buf);
			buf[len-1] = 0;

			j = 0;
			count = 0;
			i = 0;
		while ((ch = buf[i++]) != '\0') {
			if (!isalpha(ch)) 
			{
				word[j++] = '\n';
				continue;
			}
			//putchar(ch);
			count++;
			word[j++] = ch;
#if 0
			do {
				word[j++] = ch;
				ch = buf[i++];
			} while (isalpha(ch));
#endif
				//word[j] = '\0';
			}
			word[j] = 0;

		printf("word count:%d\tword:\n<%s>\n", count++, word);
	}
	printf("line count:%d.\n", line);

	return 0;
}
