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
//	printf("size of *p = %d\n", sizeof(*p));
	printf("size of *p = %d\n", sizeof(struct node));

//	printf("item & = %d\n",	&(((link)0)->num));

#if 0	
	p = malloc(sizeof(*p));
	p->item = 'D';
	//step 1: D->c
	p->next = pos->next;
	//step 2: b->D
	pos->next =p;	
#endif
//	4. insert D before pos node
	link pos = head->next;

	

	p->item = 'b';
	p->next = NULL;

	//a->b (注释)
	head->next = p;

	p = malloc(sizeof(*p));

	p->item = 'c';
	p->next = NULL;

	//b->c
	head->next->next = p;
#if 0
	//insert d before head(注释)
	p = malloc(sizeof(*p));

	p->item = 'd';
	p->next = NULL;

	p->next = head;
	head = p;
#endif
#if 0
	//2 insert D after tail
	link tail = NULL;
	p = head;
	while (p != NULL) {
		if (p->next == NULL)

			tail = p;

		p = p->next;
	}

	
	p = malloc(sizeof(*p));
	p->item = 'D';
	//step 1: D->c
	p->next = pos->next;
	//step 2: b->D
	pos->next =p;	
#endif
#if 0
//	4. insert D before pos node
	link pos = head->next;

	

	p = malloc(sizeof(*p));
	p->item = 'M';
	p->next = NULL;

	tail->next = p;
#endif
#if 0
//	3. insert D before pos node
	link pos = head->next;
	
	p = malloc(sizeof(*p));
	p->item = 'D';
	//step 1: D->c
	p->next = pos->next;
	//step 2: b->D
	pos->next =p;	
#endif
#if 0
//	4. insert D before pos node
	link pos = head->next;

	
//	p = &a;
	p = malloc(sizeof(*p));

	p->item = 'a';
	p->next = NULL;

	head = p;

	p = malloc(sizeof(*p));

	p->item = 'b';
	p->next = NULL;

	//a->b (注释)
	head->next = p;

	p = malloc(sizeof(*p));

	p->item = 'c';
	p->next = NULL;

	//b->c
	head->next->next = p;
#if 0
	//insert d before head(注释)
	p = malloc(sizeof(*p));

	p->item = 'd';
	p->next = NULL;

	p->next = head;
	head = p;
#endif
#if 0
	//2 insert D after tail
	link tail = NULL;
	p = head;
	while (p != NULL) {
		if (p->next == NULL)

			tail = p;

		p = p->next;
	}

	p = malloc(sizeof(*p));
	p->item = 'M';
	p->next = NULL;

	tail->next = p;
#endif
#if 0
//	3. insert D before pos node
	link pos = head->next;
	
	p = malloc(sizeof(*p));
	p->item = 'D';
	//step 1: D->c
	p->next = pos->next;
	//step 2: b->D
	pos->next =p;	
#endif
#if 0
//	4. insert D before pos node
	link pos = head->next;

	link prev = NULL;
	p = head;
//	1.delete pos = head	
	while (p != NULL) {
		if (p->next == pos) {
			prev = p;
			break;
		}

		p = p->next;
	}
	p = malloc(sizeof(*p));
	p->item = 'D';
	p->next = pos;

	prev->next = p;
#endif

	

#if 0
//	1.delete pos == head	
#endif
	link pos = head;
	head = pos->next;
	free(pos);
	pos = NULL;
#endif
	

//	2.delete pos != head	
	link pos = head->next;
//	link pos = head->next-next;
	link prev = NULL;
//	search for pos's prev
	while (p != NULL) {
		if (p->next == pos) {
			prev = p;
			break;
		}
		
		p = p->next;
	}
	prev->next = pos->next;
	free(pos);
	pos = NULL;


	p = head;
	// travel list from head(注释)
	while (p != NULL) {
		printf("p -> item = %c\n", p -> item);
		p = p->next;	
	}
	
	return 0;
}
