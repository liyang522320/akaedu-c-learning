#include <stdio.h>

void num(int m,int k,int xx[]);

int main(void)
{

	int m,n,xx[100];

	printf("请输入m和n的值：\n");
	scanf("%d%d",&m,&n);



	num(m,n,xx);

	for(m = 0; m < n; m++)
	{
		printf("%d  ", xx[m]);
	}



	return 0;
}

//m表示的是正整数  k表示的是要取几个素数
void num(int m,int k,int xx[])
{
	int i,j;
	int s = 0;

	//为什么要i=m+1  因为条件规定是大于正整数m的  所以从m+1开始
	//为什么是k>0  k>0是结束条件  因为条件指出要取k个素数
	for(i = m + 1; k > 0; i++)
	{
		//素数为只能被自己和1整除的数.如果i%j等于0,说明i不是素数,跳出本层循环
		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}

		//如果i与j相等，则说明i是素数
		if( i == j )
		{
			xx[s++] = i;//把该素数存放到xx数组中
			k--;

		}
	}
}
