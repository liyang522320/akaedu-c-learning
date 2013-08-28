#ifdef MY_LIST_H__
#define MY_LIST_H__

struct llist_node_st
{
	void *data;
	struct llist_node_st *prev, *next;
};


typedef struct 
{
	int size;
	struct llist_node_st head;
}LLIST;

LLIST *llist_create(int)
{
	
}

oxt->prev = newnode;

o

void llist_destroy(LLIST *);


#endif





