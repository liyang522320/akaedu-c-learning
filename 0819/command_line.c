#include <stdio.h>
#include <stdlib.h>

struct STR {
	int num;
	char str[100];
};

typedef struct STR str_t;

int main(int argc, char *argv[])
{
	int i = 0;
	char str[];
	for (i = 0; ; i++) {

	str_t	str(i); 
	fgets(str, sizeof(str), stdin);

	}
	return 0;
}
