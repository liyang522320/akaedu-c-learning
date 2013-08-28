#include <stdio.h>
#include <stdlib.h>

struct node {
	char item;
	int num;
	struct node *next;
};

typedef struct node *link;

link head = NULL;

int main(void)
{
	link p = NULL;

	printf("size of p = %d\n", sizeof(p));
	printf("size of *p = %d\n", sizeof(*p));
	printf("size of *p = %d\n", sizeof(struct node));

	p = &a;
	p = malloc(sizeof(*p));

	p->item = 'a';
	p->next = NULL;

	head = p;

	while (p != NULL) {
		printf("p->item = %c\n", p->item);
		p = p->next;
	}

	return 0;
}
