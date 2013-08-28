#include <stdio.h>

#define MAX_ROW   5
#define MAX_COL   5

struct point{
	int row, col;
	};

int top = 0;

void push(struct point p)
{
	stack[top++] = p;
}

struct point pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}
