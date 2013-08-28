#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	FILE *fp;

	printf("errno = %d\n", errno);

	fp = fopen("abc", "r");
//	fp = fopen("abc", "w");
	if (fp == NULL) {
//		printf("errno = %d\n", errno);
		perror("fopen");   //需要紧跟测试函数后边
		exit(-1);
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
