# include <stdio.h>

//int a[10];
//int *p;

int main(void)
{
	int a[10];
	int *p;
//	int i;

	printf("demo pointer_array:\n");
//	printf("i = %p\n", i);	
	printf("a = %p\n", a);
	printf("p = %p\n", p);

	printf("&a = %p\n", &a);
	printf("&p = %p\n", &p);

	printf("a + 1 = %p\n", a + 1);
	printf("p + 1 = %p\n", p + 1);

	return 0;
}
