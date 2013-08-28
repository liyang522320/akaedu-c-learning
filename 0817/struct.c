#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STU {
	char name[20];
	int id;
	char sex;
};

void input_stu(struct STU a[], int n)
{
	int i, len, len2;
	char str[80];

	for (i = 0; i < n; i++) {
		fgets(str, sizeof(str), stdin);
		len = strlen(str);
		str[len - 1] = '\0';
		strcpy(a[i].name, str);

		fgets(str, sizeof(str), stdin);
		len2 = strlen(str);
		str[len -1] = '\0';
		a[i].id = atoi(str);

		fgets(str, sizeof(str), stdin);
		a[i].sex = str[0];
	}
}

int main(int argc, char *argv[])
{
	int i, num;
	struct STU a[10];

	if (argc < 2) {
		printf("./a.out\tnum\n");
		exit(-1);
	}
	num = atoi(argv[1]);

	return 0;
}
