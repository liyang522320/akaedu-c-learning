# include <stdio.h>
int search_for_9(int a, int b)
{
	int i, count = 0, j;	
	for (i = a; i <= b; i++) {
		j = i;
		while(j) {
			if (j % 10 == 9)
				count++;
			j /= 10;
		}
	}

	return count;
}
int main(void)
{
	int a, b, count;

	printf("请输入你要查找输入的范围：");
	scanf("%d%d", &a, &b);
	count = search_for_9(a, b);
	printf("%d\n", count);

	return 0;
}
