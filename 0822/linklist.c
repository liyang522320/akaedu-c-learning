#include <stdio.h>
#include <stdlib.h>

struct node
{
	char item;
	int age;
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

	printf("item & = %p\n", &(((link)0)->num));
	
	p = malloc(sizeof(*p));
	p->item = 'a';
	p->next = NULL;
	printf("p1 = %p\n", p);

	head = p;

	p = malloc(sizeof(*p));
	p->item = 'b';
	p->next = NULL;
	printf("p2 = %p\n", p);

	head->next = p;

	p = malloc(sizeof(*p));
	p->item = 'c';
	p->next = NULL;
	printf("p3 = %p\n", p);

	head->next->next = p;

	//insert D before head
	p = malloc(sizeof(*p));
	p->item = 'D';
	p->next = head;
	printf("p4 = %p\n", p);

	head = p;

	p = head;
	while (p != NULL) {
		printf("p->item = %c\n", p->item);
		printf("p->next = %p\n", p->next);

		p = p->next;
	}

	return 0;
}

