#include <stdio.h> 

int main(void)
{
	int c, c1, c2;
	
	printf("intput a charctor:");
	c = getchar();
	c1 = c - 1;
	c2 = c  + 1;
	printf("The value of '%c' is  %4d\n", c, c);
	printf("%c : %d -- %c : %d --%c : %d\n", c1, c1, c, c, c2, c2);

	return 0; 
}
