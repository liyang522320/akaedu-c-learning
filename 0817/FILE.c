#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	FILE *fp_r, *fp_w;
	char buf[] = "hello world";
	char r_buf[1024];
	int len;

	fp_w = fopen("abc", "r+");
	fp_r = fopen("abc", "r");
	fwrite(buf, 1, strlen(buf), fp_w);
	fflush(fp_w);
	len = fread(r_buf, 1, sizeof(r_buf), fp_r);
	fwrite(r_buf, 1, len, stdout);

//	while(1)
//		;

	fclose(fp_w);
	fclose(fp_r);

	return 0;
}


