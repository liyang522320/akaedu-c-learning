#include <stdio.h>

void del_space(char *buf)
{
	char *p, *q;	
	
	
	
	
}

void parse(char *buf, int *argc, char *argv[])
{
	char *p = buf;
	*argc = 0;
	int flag = 0;

	while (*p) {
		if (flag == 0 && (*p) != ' ' && *p != '\n') {
			//found a alpha, set header
			argv[*argc] = p;
			(*argc)++;

			flag = 1;
		}

		else
		if (flag == 1 && (*p == ' ' || *p == '\n')) {
			//set tailer
			*p = '\0';

			flag = 0;
		}

		p++;
	}

	argv[*argc] = NULL;

	return;
}

int main(void)
{
	char buf[64];	
	int argc = 0;
	char *p;
	char *argv[8];
	int i;

	printf("demo argc argv\n");
	while (1) {
		printf("akaedu$$:");
		fgets(buf, sizeof(buf), stdin);
		printf("buf = <%s>", buf);

		parse(buf, &argc, argv);

		//argc = parse2(buf, argv);

		printf("argc = %d\n", argc);
		for (i = 0; i < argc; i++) {
			printf("argv[%d] argv = <%s>\n", i, argv[i]);
		}
	}

	return 0;
}
