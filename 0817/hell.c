#include <stdio.h>
//********************1. '\n'刷新stdout缓冲区(行缓冲文件)
//********************2.程序正常结束，exit负责刷新FILE类型中的缓冲区到对应文件
//********************3.利用fflush刷新缓冲区
//********************4.当缓冲区满了之后，系统自动刷新缓冲区到文件里
//********************5.关闭文件，fclose
int main(void)
{
//	printf("hello");
	printf("hello\n");
	fflush(stdout);
	while (1)
		;

	return 0;
}
