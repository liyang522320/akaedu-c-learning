#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char buf[1024]; 
	int lines;

	fp = fopen("dict.txt", "r");
	if (fp == NULL) {
		perror("fopen error");
		exit(-1);
	}

	lines = 0;
	while (fgets(buf, 1024, fp) != NULL) 
		if (buf[0] == '#')
			lines++;
	printf("line: %d\n", lines);

	close(fp);

	return 0;
}
