# include <stdio.h>
int main(void)
{
//	int *p = 0x80480000;      //段错误
	int *p = 0x8048000;
	int a = 0x8048000;

	printf("main = %p\n", main);
	printf("p = 0x%x\n", (int)p);
	printf("*p = 0x%x\n", *p);
//	*p = 0x1122;                    //  段错误
	printf("*(p + 1) = 0x%x\n", *(p + 1));
	printf("*a = 0x%x\n", * (int *) a);
	printf("*0x8048000 = 0x%x\n", *(int *)0x8048000);

	return 0;
}
