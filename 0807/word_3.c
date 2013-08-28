#include <stdio.h>
#include <string.h>
#define N 16000

struct word
{
	char name[32];
	int len;
	int freq;
	char trans[64];
};

typedef struct word word_t;
word_t  words[N];
int wc = 0;

int find(char *word)
{
	int i;
	
	for (i = 0; i < wc; i++ )
		if (strcmp(word, words[i].name) == 0)
			return -i;
	
	return -1;
}

int main(void)
{
	int i, j, count = 0, line = 0, length = 0, len_max = 0;
	int ret = 0;
	char buf[1000];
	char tmp[16];
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
		//	if (strcmp(word[j],word[j+1]) == -1)
		//		strcpy(tmp,word);
			ch = buf[i++];
			} while (isalpha(ch));
			word[j] = '\0';
			strcpy(words[wc].name, word);
			length = strlen(word);
			words[wc].len = length;
			if (length > len_max)
		 		len_max = length;
			wc++;
			strcat(word, ">");
			printf("%d\twords = <%-16s\tlen:%d\n", wc, word, length);
//			count++;
//			printf("count word:%d\tcount line:%d\twords = <%s>\n", ++count, line, word);
		}
	}
	for (i = 0; i < wc; i++) {
		if (words[i].len == len_max)
		printf("%s\t%d\n", words[i].name, words[i].len);
	}
		
	return 0;
}
