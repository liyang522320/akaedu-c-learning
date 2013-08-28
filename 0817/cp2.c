#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fpsrc, *fpdest;
	char ch;
	char buf[1000];
	
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
	while (fgets(buf, sizeof(buf), fpsrc))
		fputs(buf, fpdest);
	fclose(fpsrc);
	fclose(fpdest);

	return 0;
}
