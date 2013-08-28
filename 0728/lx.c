#include <stdio.h>
int main(void)
{
	int i,j,a;
	
	printf("请输入你要得到菱形的宽：\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<=a-i;j++)
		printf(" ");
		for(j=0;j<=i;j++)
			printf(" *");
			printf("\n");
	}
	for(i=a-1;i>0;i--)
	{
		for(j=0;j<=a-i+1;j++)
		printf(" ");
		for(j=0;j<i;j++)
			printf(" *");
			printf("\n");
	}
	return 0;
}
