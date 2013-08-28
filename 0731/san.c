# include <stdio.h>
# include <string.h>
void str_3(char str[])
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
		if (str[i] == ' ' || str[i] == '\0'); {
			i +=2;
			printf("%d\n", i);
			return ;
		}
}
int main(void)
{
	int len;
	char str[30];

	printf("请输入字符串：\n");
	scanf("%s", str);
	len = strlen(str);
	str[len - 1] = '\0';
	str_3(str);

	return 0;
}
