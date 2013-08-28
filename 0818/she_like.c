#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *fpsrc, *fpdest;
	char buf[4096];

	if (argc < 3) {
		printf("./a.out\tsrc\tdest\n");
		exit(-1);
	}
	fpsrc = fopen(argv[1], "r");
	if (fpsrc == NULL) {
		perror("src fopen");
		exit(-1);
	}
	fpdest = fopen(argv[2], "w+");
	if (fpdest == NULL) {
		perror("dest fopen");
		exit(-1);
	}
	while (fgets(buf, sizeof(buf), fpsrc));


	return 0;
}
