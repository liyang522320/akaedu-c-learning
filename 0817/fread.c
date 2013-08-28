#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	FILE *fp;	
	char buf[1024];
	int len;

	fp = fopen("abc", "w");
	if (fp == NULL) {
		perror("fopen");
		exit(-1);
	}
#if 1
	while (len = fread(buf, 1, sizeof(buf), stdin)) {
		fwrite(buf, 1, len, fp);
	}
#endif
#if 0
	while (fread(buf, 1, sizeof(buf), stdin)) {
		fwrite(buf, 1, sizeof(buf), fp);
	}
	fclose(fp);
#endif

	return 0;
}
