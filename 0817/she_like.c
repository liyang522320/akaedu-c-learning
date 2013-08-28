#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fpsrc, *fpdest;
	char buf[1000];
	int count_she = 0, count_like = 0;
	char *p;

	if (argc < 2) {
		printf("./a.out\tsrc\tdest\n");
		exit(-1);
	}

	fpsrc = fopen(argv[1], "r");
	if (fpsrc == NULL)  {
		perror("fopen src");
		exit(-1);
	}
#if 1
	fpdest = fopen(argv[2], "w+");
	if (fpdest == NULL) {
		perror("fopen dest");
		exit(-1);
	}
#endif
	while (fgets(buf, sizeof(buf), fpsrc))	{
		p = strtok(buf, "'");
		while ((p = strtok(NULL, "'")) != NULL) {
		}
		if (strcasestr(p, "she"))
			count_she++;
		if (strcasestr(p, "like"))
			count_like++;
	}	
//	strcat(str_she, "(char)count_she\n");
//	strcat(str_like, "(char)count_like");
//	strcat(str_she, str_like);
	//fputs(p, fpdest);
	fprintf(fpdest, "she = %d\nlike = %d\n", count_she, count_like);	

	fclose(fpsrc);
	fclose(fpdest);

	return 0;
}
