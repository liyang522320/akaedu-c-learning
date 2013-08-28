# include <stdio.h>
int main(void)
{
//	struct test *p = (int *)100;
	void *p = 100;
	//int *p = (int *)100;
	int a = 100;

	printf("demo pointer definition\n");
	printf("a = 0x%x\n", a);
	printf("(int)a + 1 = 0x%x\n", (int)a + 1);
//	printf("(int *)a * 2 = 0x%x\n", (int *)a * 2);  报错
	printf("a * 2 = 0x%x\n", a * 2);
	printf("a + 1 = 0x%x\n", a + 1);
	printf("p = %p\n", p);
	printf("(int)p + 1 = %p\n", (int)p + 1);
	printf("p + 1 = %p\n", p + 1);
	printf("p - 1 = %p\n", p - 1);
//	printf("p * 2 = %p\n", p * 2);  报错
	printf("(int)p * 2 = %p\n",(int)p * 2);

	return 0;
}
