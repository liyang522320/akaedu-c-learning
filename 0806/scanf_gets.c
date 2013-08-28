#include <stdio.h>
#define N  8
int main(void)
{

	char buf[N];

//	scanf("%s", buf);
//	gets(buf);
	fgets(buf, N, stdin);
	printf("%s\n", buf);

	return 0;
}
