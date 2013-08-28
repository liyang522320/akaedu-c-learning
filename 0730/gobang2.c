# include <stdio.h>
int show_chessboard(int a[][10])
{
	int i, j, k = 0;

	printf(" | 0 1 2 3 4 5 6 7 8 9\n");
	printf("-- - - - - - - - - - -\n");
	for (j = 0; j < 10; j++) {
		if (k < 10)
		printf("%d|", k++);
		for(i = 0; i < 10; i++)
			printf(" %d", a[i][j]);
		printf("\n");
	}
}
int player_1(int a[][10])
{
	int b, c;

	printf("请玩家1下棋：\n");
	scanf("%d%d", &b, &c);
	if ((a[b][c] == 1) || (a[b][c] == 2)) {
		printf("该位置已经下过棋子，请选择其他地方下棋\n");
		player_1(a);
	}
	a[b][c] = 1;
	show_chessboard(a);
}
int player_2(int a[][10])
{
	int b, c;

	printf("请玩家2下棋：\n");
	scanf("%d%d", &b, &c);
	if ((a[b][c] == 1) || (a[b][c] == 2)) {
		printf("该位置已经下过棋子，请选择其他地方下棋\n");
		player_2(a);
	}
	a[b][c] = 2;
	show_chessboard(a);
}
int win_owner(int a[][10])
{
	int i, j, k = 1, flag = 0;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++) {
			for (k = 1; k <= 5; k++) {
				if ((a[i][j] * a[i][j + k] = 1) || (a[i][j] * a[i + k][j] == 1) || (a[i][j] * a[i + k][j + k] == 1) || (a[i][j] * a[i + k][j + k] == 1)) {
					printf("player1 win!\n");
					flag = 0;
				}
				else if ((a[i][j] * a[i][j + k] = 32) || (a[i][j] * a[i + k][j] == 32) || (a[i][j] * a[i + k][j + k] == 32) || (a[i][j] * a[i + k][j + k] == 32)) {
					printf("player2 win!\n");
					flag = 0;
				}
			}
			}

	return flag;
}
int main(void)
{
	int i, j, flag = 1;
	int a[10][10] = {{0,},
					 {0,},
					 {0,},
					 {0,},
					 {0,},
					 {0,},
					 {0,},
					 {0,},
					 {0,}
	};
	for (i = 0; i < 100; i++) {
	show_chessboard(a);
	player_1(a);
	win_owner(a);
	flag = win_owner(a);
	if(flag == 0)
		break;
	player_2(a);
	}

	return 0;
}
