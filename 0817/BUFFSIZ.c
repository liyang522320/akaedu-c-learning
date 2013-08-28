#include <stdio.h>
#include <unistd.h>

int main(void)
{
	while (1) {
	printf("hello world");
	usleep(10000);
	}
	return 0;
}
