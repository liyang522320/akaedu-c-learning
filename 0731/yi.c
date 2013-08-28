# include <stdio.h>
# include <string.h>
int str_ch(char str[], char ch, int len)
{
	int i, flag = 0;
	
	for (i = 0; i < len; i++) {
		if (str[i] == ch)
			return 1;
		else
			continue;
	}

	return 0;
}
int main(void)
{
	int len, flag = 0;
	char str[30];
	char ch, tmp;

	printf("请输入字符串：\n");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	printf("请输入要查找字符：\n");
	scanf("%c", &ch);
	flag = str_ch(str, ch, len);
	if (flag)
			printf("有%c字符\n", ch);
	else
			printf("无%c字符\n", ch);

	return 0;
}
