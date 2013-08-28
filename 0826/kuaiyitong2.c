#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *key;
	int n_trans;
} word_t;

int main(void)
{
	FILE *fp;
	char buf[1024]; 
	int total;
	int i, j;
	word_t *dict;

	fp = fopen("dict.txt", "r");
	if (fp == NULL) {
		perror("fopen error");
		exit(-1);
	}

	total = 0;
	while (fgets(buf, 1024, fp) != NULL) 
		if (buf[0] == '#')
			total++;
	dict = (word_t *)malloc(sizeof(dict) *total);

	if (dict == NULL) {
		perror("malloc error");
		exit(-1);
	}

	rewind(fp);
	
	i = -1; /* dict 数组中的单词下标*/
	while (fgets(buf, 1024, fp) != NULL) {
		if (buf[0] == '#') {
			i++;
			dict[i].key = (char *)malloc(sizeof(char) * (strlen(buf) - 1));
			strcpy(dict[i].key, &buf[1]);
		}
		else {
			dict[i].n_trans = 0;
		buf[strlen(buf) - 1] ='@';
		for (j = 0; buf[j] != '\0'; j++)
			if (buf[j] == '@')
				dict[i].n_trans++;
		}
	}

	for (i = 0; i < total; i++)
		printf("%s : %d\n\n", dict[i].key, dict[i].n_trans);

	close(fp);

	return 0;
}
