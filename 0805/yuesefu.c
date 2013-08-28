#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[100]={0};
	int i, j, s, n;

	scanf("%d", &n);
	for (i = 0;i < n; i++)
	{
		a[i] = i + 1;    /* 填空数组，编号是下标加一，注意C语言中的数组下标从0开始 */
	} 
	i = 1;
	s = n;
	j = 0;
	while (s > 1)
	{
		if (a[i % n] != 0)
		{
			if ((i - j) % 3 == 0)
			{ 
				printf("%d\n", a[i % n]);    /* 把这个家伙打印出来 */
				a[i % n] = 0;
				s--;
			}
		}
		else
			j++;   
		i++;
	}

	for(i = 0; i < n; i++)
		if(a[i] != 0)
			printf("最后一个是：%d\n", a[i]);

	return 0;                
}
