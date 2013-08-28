#include <stdio.h>
int main(void)
{
	int i, num, flag = 0;

	printf("Please input a number:\n");
	scanf("%d", &num);

	if (num == 1) {
		printf("The number isn't a prime!\n");
		return;	
	}
	if (num == 2) {
		printf("The number isn't a prime!\n");
		return;
	}

	for (i = 3; i <= num; i++)  
		if ((num % i) == 0) {
			flag = 1;
			break;
		}
		else 
			continue;

	if (flag)
		printf("The number isn't a prime!\n");
	else
		printf("The number is a prime!\n");

	return 0;
}
