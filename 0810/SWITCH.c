#include <stdio.h>

int main(void)
{

	SWITCH("abc")
		CASE "abc":
				printf("This is abc");
				BREAK;
		CASE "123":
				printf("This is 123");
				BREAK;
		DEFAULT:
				BREAK;

	return 0;
}
