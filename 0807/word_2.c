#include <stdio.h>
int main(void)
{
	int i, j, count = 0, line = 0;
	char buf[1000];
	char *p;
	char ch;

	while (1) {
		i = 0;
		p = fgets(buf, 1000, stdin);

		if (p == NULL)
			break;
		line++;
		while ((ch = buf[i++]) != '\0')  {
			char word[32];
			j = 0;

			if (!isalpha(ch))
				continue;
			do {
			word[j++] = ch;
			ch = buf[i++];
			} while (isalpha(ch));
			word[j] = '\0';
//			count++;
			printf("count word:%d\tcount line:%d\twords = <%s>\n", ++count, line, word);
		}
	}

	return 0;
}
