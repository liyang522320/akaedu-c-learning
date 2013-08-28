#include <stdio.h>
#include <stdlib.h>

static char *queue;
static int h, t;
static int qc;
static int size;

void init_queue(int sz)
{
	size = sz;

	queue = malloc(size * sizeof(*queue));
	h = t = qc = 0;
}

void destroy(void)
{
	free(queue);
}

void enqueue(char iterm)
{
	queue[t++] = iterm;
	t %= size;
	qc++;
}

char dequeue(void)
{
	char ch;

	ch = queue[h++];
	h %= size;
	qc--;

	return ch;
}

int is_empty(void)
{
	return qc == 0;
}

int is_full(void)
{
	return qc == size;
}

int main(void)
{
	char ch;

	init_queue(10);
	while (((ch = getchar()) != '\n') && (!is_full()))
		enqueue(ch);
	while (!is_empty())
		putchar(dequeue());
	putchar('\n');
	destroy();

	return 0;
}
