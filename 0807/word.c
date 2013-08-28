#include <stdio.h>
int main(void)
{
	int i , j;
	char buf[100];
	char *p, ch;
	int count = 0, line = 0;

	while (1)  {
		i = 0;
		p = fgets(buf, 1000, stdin);

		if (p == NULL)
			break;
	//	if (buf[i++] == '\n')
			line++;
		while ((ch = buf[i++]) != '\0')	{
			char word[32];
			j = 0;
			if (! isalpha(ch))
				continue;

			do {
				word[j++] = ch;
				ch = buf[i++];
			} while(isalpha(ch));
			word[j] = '\0';
			count++;
			printf("word count:%d\tword line:%d\tword = <%s>\n", count, line, word);

	
		}
	}

	return 0;
}
