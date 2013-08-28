#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

struct record {
	int a;
	char str[90];
};

typedef struct record record_t;

int main(int argc, char *argv[])
{
	FILE *fp;
	char buf[4096];
	char str[3];
	record_t max, tmp;
	max.a = 0;

	if (argc < 2) {
		printf("./a.out\tfp\n");
		exit(-1);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		perror("fp fopen");
		exit(-1);
	}
	while (fscanf(fp, "%d %s", &tmp.a, tmp.str) != EOF)
		if (tmp.a > max.a)
			max.a = tmp.a;
	printf("%d\t%s\n", max.a, max.str);

	fclose(fp);
/*
	while (fgets(buf, sizeof(buf), fp)) {
		str[0] = buf[0];
		str[1] = buf[1];
		strcpy(p[i].str, buf);
		p[i].a = (int)str;
		i++;	
		
	}
	max = p[0].a;
	for (j = 1; j <= i; j++)	
	if (max < p[j].a)	
		max = p[j].a;
	printf("%d\n", max);
*/
	return 0;
}
