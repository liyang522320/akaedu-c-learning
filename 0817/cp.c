#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *fpsrc, *fpdest;
	char ch;
	
	if (argc < 3) {
		printf("a.out\tsrc\tdest\n");
		exit(-1);
	}
	fpsrc = fopen(argv[1], "r");
	if (fpsrc == NULL) {
		perror("fopen src");
		exit(-1);
	}
	fpdest = fopen(argv[2], "w");
	if (fpdest == NULL) {
		perror("fopen dest");
		exit(-1);
	}
	while ((ch = fgetc(fpsrc)) != EOF)
		fputc(ch, fpdest);
	fclose(fpsrc);
	fclose(fpdest);

	return 0;
}
