#include <stdio.h>
int main(void)
{
	int i,j,a;

	printf("请输入你要得到三角形的高度:\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<=a-i;j++)
			printf(" ");
			for(j=0;j<=i;j++)
				printf(" *");
				printf("\n");
	}
	return 0;
}
