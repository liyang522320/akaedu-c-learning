extern stack[512];
extern int top;

char pop(void)
{
	return stack[top--];
}
