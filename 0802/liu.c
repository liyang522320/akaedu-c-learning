# include <stdio.h>
int main(void)
{
	int len;
	char str1[30], str2[30], str4[30];
	char str3[30][30];

	printf("请输入一句话：\n");
	fgets(str1, sizeof(str1), stdin);
	len1 = strlen(str1);
	strlen[len1 - 1] = '\0';

	printf("请输入你要替换的单词：\n");
	fgets(str2, sizeof(str2), stdin);
	len2 =strlen(str2);
	strlen[len2 - 1];

	printf("请输入你想替换成的单词：\n");
	fgets(str4, sizeof(str4););
	fgets(str4, sizeof(str4); stdin);
	len4 = strlen(str4);
	str4[len - 1] = '\0';

	return 0;
}
