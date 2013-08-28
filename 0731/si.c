# include <stdio.h>
void show_chessboard(char str[][10])
{
	int i, j;
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			printf("%c ", str[j][i]);
		}
			printf("\n");
		}
}
void player(char str[][10])
{
	int a, b, c, d;

a:	printf("请棋手1下棋：\n");
	scanf("%d%d", &a, &b);
	if (str[a][b] == '1' || str[a][b] == '2') {
		printf("该位置已有棋子，请选择其他地方下棋\n");
		goto a;
	}
		else {
			str[a][b] = '1';
			show_chessboard(str);
		}
b:	printf("请棋手2下棋：\n");
	scanf("%d%d", &c, &d);
	if (str[c][d] == '1' || str[c][d] == '2') {
		printf("该位置已有棋子，请选择其他地方下棋\n");
		goto b;
	}
		else {
			str[c][d] = '2';
			show_chessboard(str);
		}
}
int main(void)
{
	int i;
	char str[10][10] = {{"**********"},
						{"**********"},
						{"**********"},
						{"**********"},
						{"**********"},
						{"**********"},
						{"**********"},
						{"**********"},
						{"**********"},
						{"**********"}
	};
		
	for (i = 0; i < 20; i++) {
		player(str);
	}

	return 0;
}
