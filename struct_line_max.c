#include <stdio.h>

struct  record {
	int line;
	char buf[64];
};
typedef struct record record_t;

int main(int argc, char *argv[])
{
	int line;
	char buf[128];
	FILE *fp;
	char nouse;
//	int max;
//	char max_buf[128];
	record_t max, tmp;

	printf("demo max line\n");

	fp = fopen(argv[1], "r");

	max.line = 0;
	while (1) {
		int ret;
		char buf2[128] = "";
		char *p;
		
		p = fgets(buf2, 128, fp);
		ret = sscanf(buf2, "%s %s %s %d %s %s %s", nouse, nouse, nouse , nouse, &tmp.line, nouse, nouse, tmp.buf);
		printf("%d\n", ret);
		printf("line: %d, buf : <%s>\n", tmp.line, tmp.buf);

	if (p == NULL)
		break;

	if (tmp.line > max.line) {
	//	max = line;
	//	strcpy(max_buf, buf);
		max = tmp;
		}
	}
	printf("max line = %d, buf = <%s>\n", max.line, max.buf);

	fclose(fp);

	return 0;
}
