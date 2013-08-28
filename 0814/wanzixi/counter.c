#include <stdio.h>

int main(void)
{
	float a, b, result = 0;
	char op;
	int flag = 1;

	printf("input a, b, op:\n");
	scanf("%lf%c%lf", &a, &b, &op);
	switch (op) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		default:	
			flag = 0;
	}

	if (flag)
		printf("result = %f\n", result);
	else
		printf("invalid input a or op\n");

	return 0;
}
