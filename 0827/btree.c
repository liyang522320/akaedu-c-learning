#include <stdio.h>
#include <stdlib.h>

struct node {
	char item;
	struct node * l, *r;
};

typedef struct node * link;
	
link root = NULL;

link make_node(char item)
{

	link p;
	p = malloc(sizeof(*p));
	p->item =item;
	p->l = NULL;
	p->r = NULL;

	return p;
}

void traverse(link t)
{
	if (t == NULL) {
		printf("()");

		return;
	}

	printf("(%c", t->item);
	traverse(t->l);
//	printf("t->item = %c\n", t->item);
	traverse(t->r);
	printf(")", t->item);
}

int count(link t)
{
	if (t == NULL) {
		return 0;
	}

	return 1 + count(t->l) + count(t->r);
}

int depth(link t)
{
	if (t == NULL) {
		return 0;
	}

	int lc = depth(t->l);
	int rc = depth(t->r);
	return 1 + (lc > rc ? lc : rc);
}

#if 1
int isbalanced(link t)
{
	if (t == NULL)
		return 1;
	int lc = depth(t->l);
	int rc = depth(t->r);

	int lb = isbalanced(t->l);
	if (lb == 0)
		printf("t->l->item = %c is not balanced\n", t->l->item);

	int rb = isbalanced(t->r);
	if (rb == 0)
		printf("t->r->item = %c is not balanced\n", t->r->item);

	if (lc - rc >= 2 || rc - lc >= 2)
		printf("t->item = %c is not balanced\n", t->item);
	
	if (lb == 0 || rb == 0)
		return 0;

	if (lc - rc >= 2 || rc - lc >= 2)
		return 0;
	
	return 1;

}
#endif

#if 0
int isbalanced(link t)
{
	if (t == NULL)
		return 1;
	int lc = depth(t->l);
	int rc = depth(t->r);

	if (lc - rc >= 2 || rc - lc >= 2)
		printf("t->item = %c is not balanced\n", t->item);
	
	if (isbalanced(t->l) == 0 || isbalanced(t->r) == 0)
		return 0;

	if (lc - rc >= 2 || rc - lc >= 2)
		return 0;
	
	return 1;
}
#endif

link init(char VLR[], char LVR[], int n)
{
	int k = 0;
	link t;

	if (n <= 0)
		return NULL;

	for (k = 0; VLR[0] != LVR[k]; k++)
		;	
	t = make_node(VLR[0]);
	t->l = init(VLR + 1, LVR, k);
	t->r = init(VLR + 1 + k, LVR + 1 + k, n - k -1);

	return t;
}

int mypow(int base, int pow)
{
	int ret = 1;
	int i = 0;

	for (i = 0; i < pow; i++)
		ret *= pow;
	
	return ret;
}

#if 0
link init(char VLR[], char LVR[], int n)
{
	int k = 0;
	link t;

	if (n <= 0)
		return NULL;

	for (k = 0; VLR[0] != LVR[k]; k++)
		;

	t = make_node(VLR[0]);
	t->l = init(VLR + 1, LVR, k);
	t->r = init(VLR + 1 + k, LVR + 1 + k, n - k - 1);

	return t;
}
#endif

int main(void)
{
	char pre_seq[] = "421356";
	char in_seq[] = "123456";

//	root = init(pre_seq, in_seq, 6);

#if 1
	link a, b, c, d, e, f;

//	printf("demo binary tree!\n");	
	a = make_node('4');
	b = make_node('2');
	c = make_node('5');
	d = make_node('1');
	e = make_node('3');
	f = make_node('6');

	a->l = b;
//	a->r = c;
	b->l = d;
	d->l = c;
	c->l = f;
	b->r = e;
//	c->r = f;

	root = a;
#endif

	printf("\\tree");
	traverse(root);
	printf("\n");
	printf("count = %d\n", count(root));		
	printf("depth = %d\n", depth(root));		
	printf("balanced = %d\n", isbalanced(root));		
#if 0
	if (mypow(2, depth(root)) == count(root) + 1)
		printf("it is a FULL Btree\n");
	else
		printf("it is not a FULL Btree\n");
#endif

	return 0;
}
