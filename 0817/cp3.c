#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *fpsrc, *fpdest;
	char str[4096];
	int len;

	if (argc < 3) {
		printf("./a.out\tsrc\tdest\n");
		exit(-1);
	}
	fpsrc = fopen(argv[1], "r");
	if (fpsrc == NULL) {
		perror("fopen");
		exit(-1);
	}
	fpdest = fopen(argv[2], "w");
	if (fpdest == NULL) {
		perror("fopen");
		exit(-1);
	}
	while (len = fread(str, 1, sizeof(str), fpsrc))
		fwrite(str, 1, len, fpdest);
	fclose(fpsrc);
	fclose(fpdest);
	
	return 0;
}

