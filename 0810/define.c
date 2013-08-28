#include <stdio.h>

#define DEBUG(x)  printf("<%s>@(%s) line:%d " #x " = %d\n", __func__, __FILE__, __LINE__, x)

void mytestf(void)
{
	int i = 100;

	DEBUG(i);

	printf("current line is %d\n", __LINE__);
	printf("current func is %s\n", __func__);

	return;
}

int main(void)
{
	int i = 100;

	DEBUG(i);

	printf("current line is %d\n", __LINE__);
	printf("current time is %s\n", __TIME__);
	printf("current data is %s\n", __DATE__);
	printf("current stdc is %d\n", __STDC__);
	printf("current file is %s\n", __FILE__);

	mytestf();

	return 0;
}
