#include <stdio.h>
#include <stdlib.h>

#define N		100
#define OUT		3

typedef struct node *link;

struct node {
	int id;
	link next;
};

link make_node(int id)
{
	link p;

	p = malloc(sizeof(*p));

	p->id = id;
	p->next = NULL;

	return p;
}

link head = NULL;
link tail = NULL;

void insert_tail(link p)
{
	//fist insert
	if (head == NULL) {
		head = tail = p;
		head->next = head;
		return;
	int i;
	}

	//next insert
	tail->next = p;
	tail = p;
	tail->next = head;

	return;
}

void traverse(link t)
{
	link p;

	if (t == NULL)
		return;
	
	p = t;
#if 0
	while (p->next != t) {
		printf("p->id = %d\n", p-> id);
		p = p->next;
	}
	printf("p->id = %d\n", p-> id);
#endif

#if 1
	do {
		printf("p->id = %d\n", p-> id);
		p = p->next;
	} while (p != t);
#endif

}

void delete(link p)
{
	if (head->next == head) {
		head = tail = NULL;
		free(p);
		return;
	}

	if (p == head) {
		head = p->next;
		tail->next = head;
	}
	
	else {
		link pre;

		pre = head;
		while(1) {
			if (pre->next == p) {
				pre->next = p->next;
				if (p == tail)
					tail = pre;
				break;
			}

			if (pre == tail)
				break;
			pre = pre->next;
		}
	}
	free(p);
	return;
}

int main(void)
{
	int i = 0;
	int countoff = 0;
	link p;

	printf("demo  Josephus ring\n");

	for (i = 0; i < N; i++) {
		p = make_node(i + 1);
//		printf("p->id = %d\n", p->id);
		insert_tail(p);
	}

//	print all list id
	traverse(head);

//	begin to loop
	p = head;
	int	step = 0;
	countoff = 0;
	while (head) {
		tail->next =head;
//		link out;
		link save;

		step++;
		countoff++;
//		printf("step %d: %d\n", step,  p->id);	

//		printf("step %d: %d countoff: %d\n", step,  p->id, countoff);	

		save = p;
		p = p->next;

//		if (p == NULL)
//			p = head;

		tail->next = head;
		if (countoff == OUT) {
			countoff = 0;
			//kick p out
		//	delete(p);
			//out = p;
			printf("who is out: %d\n", save->id);
			delete(save);
		}

	//	p = p->next;
	//	if (p == NULL)
	//		p = head;

//		if (countoff == 0)
//			delete(out);

		//if (head == NULL)
		//	break;
	}

	return 0;
}
