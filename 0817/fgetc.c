#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	printf("errno = %d\n", errno);

	fp = fopen("abc", "w");
	if (fp == NULL) {
	//	printf("errno = %s\n", strerror(errno));
	perror("fopen");	

		exit(-1);
	}
	while ((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);

	fclose(fp);
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
