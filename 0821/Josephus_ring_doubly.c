#include <stdio.h>
#include <stdlib.h>

#define N		100
#define OUT		3

typedef struct node *link;

struct node {
	int id;
	link next;
	link prev;
};

link make_node(int id)
{
	link p;

	p = malloc(sizeof(*p));

	p->id = id;
	p->next = NULL;
	p->prev = NULL;

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
		head->prev = head;

		return;
	int i;
	}

	//next insert (only one node head == tail)
	if (head == tail) {
		tail = p;
		head->next = tail;
		head->next = tail;

		tail->next = head;
		tail->prev = head;
		return;
	}

//	head != tail, at least 2 node
	tail->next = p;
//	tail->prev = tail->prev;
	p->next = head;
	p->prev = tail;

	tail = p;

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
	// only 2 node (head and tail)	
		if (head->next == tail) {
			head = tail;
			tail->next = tail;
			tail->prev = tail;
		}

		else {
			head->next->prev = head->prev;
			// head->next->next
			tail->next = head->next;
			// tail->prev
			head = head->next;
		}

//		head->next->
//		head = p->next;
//		tail->next = head;
	}
	else  //p != head
	{
		p->prev->next = p->next;
		p->next->prev = p->prev;

		if (p == tail)
			tail = p->prev;
	}
#if 0	
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
#endif
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

		printf("step %4d: %3d countoff: %3d\n", step,  p->id, countoff);	

		save = p;
		p = p->next;

//		if (p == NULL)
//			p = head;

		tail->next =head;
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
