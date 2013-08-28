# include <stdio.h>
int  Win_owner(char str[][11]);
char *show_chessboard(char str[][11])
{
	int i, j, k = 0;

	printf(" | 0 1 2 3 4 5 6 7 8 9\n");
	printf("-- - - - - - - - - - - \n");
	for (j = 0; j < 11; j++) {
		if(k<10)
			printf("%d|", k++);
		for (i = 0; i < 11; i++) {
			printf(" ");
			printf("%c",str[i][j]);
		}
		printf("\n");
	}
}
void player_1(char str[][11], int k)
{
	int a, b, c, d, i, j, flag = 0;

	if(k % 2 == 1)
		goto a;
	else
		goto b;
a:	printf("请棋手1下棋：\n");
	scanf("%d%d", &a, &b);
	if (str[a][b] == '1' || str[a][b] == '2') {
		show_chessboard(str);
		printf("该位置已有棋子，请选择其他位置下棋\n");
		goto a;
	}
	else {		
		str[a][b] = '1';
		show_chessboard(str);
		//	flag = Win_owner(str);
		//	if (flag == 1)
		return ;
	}
b:	printf("请棋手2下棋：\n");
	scanf("%d%d", &c, &d);
	if (str[c][d] == '1' || str[c][d] == '2') {
		show_chessboard(str);
		printf("该位置已有棋子，请选择其他位置下棋\n");
		goto b;
	}
	else {
		str[c][d] = '2';
		show_chessboard(str);
		//	flag = Win_owner(str);
		//	if (flag == 1)
		return ;
	}
}
int Win_owner(char str[][11])
{
	int i, j, k = 1, flag = 0;
	for (i = 0; i < 11; i++)
		for (j = 0; j< 11; i++) {
			while (str[i][j] == str[i][j + k]) {
				k++;
				if (k == 5) {
					if (str[i][j] == '1') {
						printf("player1 win!\n");
						flag = 1;
					}
					else if (str[i][j] == '2') {
						printf("player2 win!\n");
						flag = 1;
					}
					return flag;
				}
			}
			k = 1;
			while (str[i][j] == str[i + k][j]) {
				k++;
				if (k == 5) {
					if (str[i][j] == '1') {
						printf("player1 win!\n");
						flag = 1;
					}
					else if (str[i][j] == '2') {
						printf("player2 win!\n");
						flag = 1;
					}
					return flag;
				}
			}
			k = 1;
			while (str[i][j] == str[i + k][j + k])	{
				k++;
				if (k == 5)  {
					if (str[i][j] == '1') {
						printf("player1 win!\n");
						flag = 1;
					}
					else if (str[i][j] == '2') {
						printf("player2 win!\n");
						flag = 1;
					}
					return flag;
				}
			}
			k = 1;
			while (str[i][j] == str[i + k][j - k])	{
				k++;
				if (k == 5)  {
					if (str[i][j] == '1') {
						printf("player1 win!\n");
						flag = 1;
					}
					else if (str[i][j] == '2') {
						printf("player2 win!\n");
						flag = 1;
					}
					return flag;
				}
			}
			k = 1;
		}
	return flag;


	/*	
		for (i = a; (i < a + 5) && (i < 11); i++)
		if (str[i][b] == str[i+1][b] == '1')
		count++;
		else 
		break;
		for (i = a; (i > a - 5) && (i >= 0); i--)
		if (str[i][b] == str[i-1][b] == '1')
		count++;
		else
		break;
		if (count == 5) {
		printf("player1 win\n");
		goto a;
		}
		else 
		count = 1;
		for (j = b; (j < b + 5) && (j < 11); j++)
		if (str[a][j] == str[a][j+1] == '1')
		count++;
		for (j = b; (j > b - 5) && (j > 0); j++)
		if (str[a][j] == str[a][j-1] == '1')
		count++;
		if (count == 5) {
		printf("player1 win\n");
		goto a;
		}
		else
		count = 1;
		if ((i = a) && (j = b);(i < (a + 5)) && (i < 11))
	 */
}
int main(void)
{
	int i, flag = 0, k = 1;
	char str[11][11] = {{"**********"},
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
	for (i = 1; i < 100; i++) {
		show_chessboard(str);
		player_1(str, k);
		k++;
		flag = Win_owner(str);
		if (flag == 1)
			break;
	}

	return 0;
}
