#include <stdio.h>

typedef void(*FP)(char *);
typedef void FF(char *);

void say_hello(const char *str)
{
	printf("hello %s\n", str);
	
	return;
}

int main(void)
{
	void (*f)(const char *) = say_hello;
	int a;

	// void (*)(char *)     f  可以看成是这种形式
	f("Guys");
	printf("f = %p\n", f);
	printf("say_hello = %p\n", say_hello);

	a = 0x80483e4;
//	((void (*)(char *))a)("akaedu");
//	((void (*)(char *))0x80483e4)("i am akaedu");
	((FP)0x80483e4)("Today is August 20th");
	((FF *)0x80483e4)("I am FF");

	return 0;
}
