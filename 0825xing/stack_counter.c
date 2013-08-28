#include <stdio.h>
#include <string.h>

void 

int main(void)
{
	char str[512];
	char *p;
	int res;

	fgets(str, sizeof(str), stdin);
	strtok(str, " \n");
	if (!p) {
		printf("err input\n");
		return -1;
	}
	push(atoi(p));
	while (p = strtok(NULL, " \n")) {
		switch(*p) {
			case '+':
					push(pop() + pop());
					break;

			case '-':
					push(pop() - pop());
					break;
					
			case '*':
					push(pop() * pop());
					break;

			case '/':
					push(pop() / pop());
					break;
			default:
					push(atoi(*p));
					break;

		}
	}

	return 0;
}
