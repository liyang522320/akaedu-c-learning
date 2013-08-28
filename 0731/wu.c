# include <stdio.h>
float show_average(float a, float b)
{
//	float ave;
//	ave = (a + b) / 2;
	return (a + b) / 2;
}
int main(void)
{
	float a, b;

	printf("请输入要求平均值的两个数：\n");
	scanf("%f%f", &a, &b);
	show_average(a, b);
	printf("%f\n", show_average(a, b));

	return 0;
}
