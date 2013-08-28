#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *key;
	int n_trans;
	char **trans;
} word_t;

int bsearch(word_t *a, int start, int end, const char *key)
{
	int mid;

	if (start > end)
		return -1;
	mid = (start + end) / 2;
	if (strcmp(key, a[mid].key) == 0)
		return mid;
	else if (strcmp(key, a[mid].key) > 0)
		return bsearch(a, mid + 1, end, key);
	else 
		return bsearch(a, start, mid - 1, key);
}

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
			int pos = -1;

			dict[i].n_trans = 0;
		buf[strlen(buf) - 1] ='@';
		for (j = 0; buf[j] != '\0'; j++)
			if (buf[j] == '@')
				dict[i].n_trans++;
		dict[i].trans = (char **)malloc(sizeof(char *) * dict[i].n_trans);
		pos = -1;
		for (j = 6; buf[j] != '\0'; j++) {
			char *p = buf;

			if (buf[j] == '@') {
				pos++;
				buf[j] = '\0';
				dict[i].trans[pos] = (char *)malloc(sizeof(char) * (strlen(p) + 1));

				strcpy(dict[i].trans[pos], p);
				p = &buf[j + 1];
				}
			}
		}
	}
	close(fp);

	while(1) {
		fgets(buf, 1024, stdin);
		buf[strlen(buf) - 1] = '\0';
		if (buf[0] == '#')
			break;
		i = bsearch(dict, 0, total - 1, buf);
		if (i == -1)
			printf("not found\n");
		else {
			printf("%s\n", dict[i].key);
			for (j = 0; j < dict[i].n_trans; j++)
				printf("Trans %d : %s \n", j + 1, dict[i].trans[j]);
			printf("\n");
		}
	}

	for (i = 0; i < total; i++) {
		free(dict[i].key);
		for (j = 0; j < dict[i].n_trans; j++)
			free(dict[i].trans[j]);
		free(dict[i].trans);
	}
	free(dict);

	return 0;
}
