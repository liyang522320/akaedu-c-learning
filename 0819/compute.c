#include <stdio.h>

int add(int i, int j)
{
	return (i + j);
}

int sub(int i, int j)
{
	return (i -j);
}

int main(void)
{
	int a = 3, b = 5;
	int ret, i;
	int (*p[2])(int, int);

	p[0] = add;
	p[1] = sub;

	for (i = 0; i < 2; i++)
	{
		ret = p[i](a,b);
		printf("ret = %d\n", ret);
	}
//	sum = p(a, b);
//	sum = add(a, b);

//	printf("sum = %d\n", sum);

	return 0;

}
