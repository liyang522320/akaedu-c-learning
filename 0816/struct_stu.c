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
	static int i = 0;
	int len;
	char str[80];

	printf("input student message:\n ");
	printf("name\nid\nsex\n");

	for (; i < n; i++) {
		fgets(str, sizeof(str), stdin);
		len = strlen(str);
		str[len - 1] = '\0';
		strcpy(a[i].name, str);

		fgets(str, sizeof(str), stdin);
		len = strlen(str);
		str[len - 1] = '\0';
		a[i].id = atoi(str);

		fgets(str, 80, stdin);
		a[i].sex = str[0];

			
		putchar('\n');
	}
}


void sort_name(struct STU a[], int n)
{
	int i, j;
	struct STU tmp;

	for (i = 0; i < n; i++) 
		for (j = 1; j < n - i; j++)
		if (strcmp(a[j-1].name, a[j].name) > 0) {
			tmp = a[j - 1];	
			a[j - 1] = a[j];
			a[j] = tmp;

		}
}

int main(int argc, char *argv[])

{
	char *p;
	int i, num, j;	
	char ch;

	if (argc < 2) {
		printf("a.out\tnum\n");

		exit(-1);
	}
    num = atoi(argv[1]);
	struct STU a[10];	

	p = calloc(num, sizeof(struct STU));
	input_stu(a, num);

b:	printf("您是否要继续输入：y/n\n");
	scanf("%c", &ch);
	getchar();

	if (ch == 'n') 
		goto c;


	else if (ch == 'y') {
		num++;
		{
			p = realloc(p, num*(sizeof(struct STU)));
			input_stu(a, num);
			goto b;
		}
	}
c:	sort_name(a, num);
	for (i = 0; i < num; i++)
		printf("%s\t%d\t%c\n", a[i].name, a[i].id, a[i].sex);
		
	free(p);

	return 0;
}
