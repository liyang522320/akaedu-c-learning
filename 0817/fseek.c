#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	char buf[1024];
	int len;

	if (argc < 2) {
		printf("./a.out\tfile\n");
		exit(-1);
	}
	fp = fopen(argv[1], "w+");
	if (fp == NULL) {
		perror("fopen");
		exit(-1);
	}
	while ((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);
//	fseek(fp, 0, SEEK_SET);
//	rewind(fp);
	len = (int)ftell(fp);
	fseek(fp, 0-len, SEEK_END);

	while (len = fread(buf, 1, sizeof(buf), fp))
		fwrite(buf, 1, len, stdout);
	fclose(fp);

	return 0;
}


#if 0

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main(void)
{
	FILE *fp;
	char ch;
	char buf[1024];
	int len;
	if (argc < 2)  {
		printf("./a.out\tfile\n");
		exit(-1);
	}
	fp = fopen(argv[1], "w+");
	if (fp == NULL) {
		perror("fopen");
		exit(-1);
	}
	while ((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);
		fseek(fp, 0, SEEK_SET);
		rewind(fp);
		len = (int)ftell(fp);
		fseek(fp, 0-len, SEEK_END);
	while(len = fread(buf, 1, sizeof(buf), fp))
		fwrite(buf, 1, len, stdout);
		fclose(fp);
		return 0;
}

#endif
