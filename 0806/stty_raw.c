#include <stdio.h>
int main(void)
{
	char buf[64];
	char buf2[64];
	char ch;

	system("stty raw");
	printf("do you want to continue? y/n\n\r");

	do
	{
		ch = getchar();
		printf("ch = %c (0x%x) \r\n", ch, ch);
	} while (1);

	if (ch = 'y')
		printf("ok, continue\n");
	else 
		printf("good bye!\n");

	scanf("%s", buf2);
	system("stty - raw");

	return 0;
}
