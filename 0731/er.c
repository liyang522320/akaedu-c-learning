# include <stdio.h>
# include <string.h>
void str_c(char str[])
{
	int i, j, len, k;

	len = strlen(str);
	for (i = 0; i < len; i++)  
			if (str[i] == str[i + 1])  {
				printf("%c\n", str[i]);
				k = 1;
			}
	if (k != 1)			
		printf("无叠字出现\n");
}
int main(void)
{
	char str[30];

	printf("请输入字符串：\n");
	scanf("%s", str);
	str_c(str);


	return 0;
}
