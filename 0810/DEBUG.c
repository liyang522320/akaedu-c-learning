#include <stdio.h> 
#define DEBUG(x)  printf(#x " is int ,value is " #x " = %d " #x " = %d\n", x, 2*x) 
int main(void)
{
	int a = 100;
	int b = 200;
	int c = 300;

	DEBUG(a);
	DEBUG(b);
	DEBUG(c);
	DEBUG((2*a));
	DEBUG((2*b));
	DEBUG((2*c));

	return 0;
}
