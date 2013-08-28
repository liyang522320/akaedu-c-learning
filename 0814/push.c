#include <stdio.h>

char stack[512];
int top = -1;

void push(char c)
{
	stack[++top] = c;
}
	
char pop(void)
{
	return stack[top--];
}

int is_empty(void)
{
	return top == -1;
}

int a, b = 1;

int main(void)
{
	push('a');
	push('b');
	push('c');

	while (! is_empty())
		putchar(pop());
	putchar('\n');

	return 0;
}
