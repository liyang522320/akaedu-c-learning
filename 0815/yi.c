#include <stdio.h>

void myrand(int a[])
{
	int i;

	srand(time(NULL));
	for (i = 0; i < 100; i++)	
		a[i] = rand() % 100;
}

void show_a(int a[])
{
	int i;

	for (i = 0; i < 100; i++) {
		printf("%d\t", a[i]);
		if (i % 10 == 9)
			putchar('\n');
	}
}
void sort(int a[])
  {
  int i, j, tmp;

  for (i = 0, j = 100 - 1; i < j; i++)
	  if (a[i] % 2 == 0) {
		  tmp = a[i];
		  a[i] = a[j];
		  a[j] = tmp;
		  i--;
		  j--;
	  }
  }

int main(void)
{
	int a[100] = {0};

	myrand(a);
	show_a(a);
	putchar('\n');
	sort(a);
	show_a(a);

	return 0;
}
