#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char filename[100];
	int i;
	i = 3;
	while(1) {
		sprintf(filename, "file%d", i);
		fp = fopen(filename, "w");
		if (fp == NULL) {
			printf("fopen fail\n");
			exit(-1);
		}
		printf("%d\n", i);
		i++;
	}
	//fputs("hello,word", fp);
	//fclose(fp);

	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char filename[100];
	int i;
	i =3;

	while(1) {
		sprintf(filename, "file%d", i);
		fp = fopen(filename, "w");
		if (fp == NULL) {
			printf("fopen fail\n");
			exit(-1);
		}
		printf("%d\n", i)
	}

	return 0;
}
*/
