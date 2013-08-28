#include <stdio.h>
	　　#define M 200
　　int main()
	　　{
		　　int temp=0;
		　　int b=1,k=0;
		　　for(int i=1;i<=M;i++)
			　　{
				　　temp=b+3*k;
				　　if(i==temp)//规则2:若上一组数字为最后保留号与人数相等，则下一数从2开始记。
					　　{
						　　b=2;
						　　k=0;
						　　continue;
						　　}
						　　else if(i-temp==1)//规则1:若上一组数字为最后保留号比人数少一，则下一数从1开始记。
							　　{
								　　b=1;
								　　k=0;
								　　continue;
								　　}
								　　k++;
			}
		　　printf("%d %d ",M,temp);
		　　return 0;
		　　}
