#include <stdio.h>
#include "func.h"

int load(int argc, char *argv[]);
int list(int argc, char *argv[]);
int sort(int argc, char *argv[]);
int find(int argc, char *argv[]);

struct student
{
	char name[32];
	char cname[16];
	int age;
	char gender[4];
	char native[16];
	char qq[16];
	char email[32];
	char hobby[128];
	
};

typedef struct student stu_t;

struct cmd
{
	char name[16];
	int (*pf)(int argc, char *argv[]);
} cmds[] = 
{	"load", load,
	"list", list,
	"sort", sort,
	"find", find,
};

int main(void)
{
	while (1) {
		char buf[128];
		int i;

		fgets(buf, 128, stdin);

		parse(buf, &argc, argv);

		for(i = 0; i < sizeof(cmds)/sizeof(cmd[0]; i++))
			if (strcmp(argv[0], cmds[i].name) == 0)
				cmds[i].pf(argc, argv);
	}
	list();
	sort_by_name();
	sort_by_age();
	find_native();
	find_hobby();


	return 0;
}
