#include <stdio.h>
#include <string.h>
char *rand_num(char str1[])
{
	int i, j;

	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		str1[i] = rand() % 10 + '0';
		for (j = 0; j < i; j++)
			if (str1[j] == str1[i])
				i--;
	}
	str1[4] = '\0';

	return str1;
}
char *get_num(char str2[], int n)
{
	int i, j, len;

a:	printf("请输入0到9四个不重复的数：\n");
	fgets(str2, n, stdin);
	len = strlen(str2);
	str2[len - 1] = '\0';
	for (i = 0; i < 4; i++) {
		if (str2[i] > '9' || str2[i] < '0') {
			printf("输入数字错误\n");
			goto a;
		}
		for (j = 0; j < i; j++)
			if (str2[i] == str2[j]) {
				printf("输入了重复数字\n");
				goto a;
			}
	}

	return str2;
}
int cmpare(char str1[], char str2[])
{
	int i, j, A_n = 0, B_n = 0;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++) {
			if (str1[i] == str2[j] && i == j)
				A_n++;
			else if (str1[i] == str2[j] && i != j)
				B_n++;
		} 
	printf("\n");
	if (strcmp(str1, str2) == 0)
		printf("You bet!\n");
	else if (A_n == 0 && B_n == 0)		
		printf("0000");
	for (i = 1; i <= A_n; i++) {
		if (A_n == 4)
			break;
		printf("A");
	}
	for (i = 1; i <= B_n; i++)
		printf("B");
	printf("\n");

	return A_n;
} 
int main(void)
{
	int i, a = 0, b = 0;
	char str1[6], str2[6];

	rand_num(str1);
//	printf("%s\n", str1);
	while (a != 4) {
		get_num(str2, sizeof(str2));
		a = cmpare(str1, str2);
		b++;
		if (b == 20) {
			printf("你失败了！\n");

			return 0;
		}
	}
	printf("\n");

	return 0;
}
