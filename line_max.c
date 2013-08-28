#include <stdio.h>

int main(int argc, char *argv[])
{
	int line;
	char buf[128];
	FILE *fp;
	int max;
	char max_buf[128];

	printf("demo max line\n");

	fp = fopen(argv[1], "r");

	while (1) {
		int ret;
		ret = fscanf(fp, "%d %s", &line, buf);
		printf("%d\n", ret);
		printf("line: %d, buf : <%s>\n", line, buf);

	if (ret < 0)
		break;

	if (line > max) {
		max = line;
		strcpy(max_buf, buf);
		}
	}
	printf("max line = %d, buf = <%s>\n", max, max_buf);

	fclose(fp);

	return 0;
}
