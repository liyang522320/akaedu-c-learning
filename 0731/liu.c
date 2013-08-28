# include <stdio.h>
# include <string.h>
char replace(char str1[], char str2[], char str3[], int len1, int len2, int len3)
{	
	int i, j, m, k = 0;

	for (i = 0; i < len1; i++)
		for (j = 0; j < len2; j++) {
				while (str1[i + k] == str2[j + k]) {
					k++;
					if (k == len2) {
						for(m = 0; m < len3; m++)
						str1[i+ m] = str3[m];
					}
				}
		}
	for (i = 0; i < len1; i++)
		printf("%c", str1[i]);
}
int main(void)
{
	int len1, len2, len3;
	char str1[30];
	char str2[30];
	char str3[30];
	
	printf("请输入一句话：\n");
	fgets(str1, sizeof(str1), stdin);
	len1 = strlen(str1);
	str1[len1 - 1] = '\0';

	printf("请输入你要替换的单词：\n");
	fgets(str2, sizeof(str2), stdin);
	len2 = strlen(str2);
	str2[len2 - 1] = '\0';
	printf("输入你要替换成为的单词：\n");
	fgets(str3, sizeof(str3), stdin);
	len3 = strlen(str3);
	str3[len3 - 1] = '\0';

	replace(str1, str2, str3, len1, len2, len3);
	return 0;
}
