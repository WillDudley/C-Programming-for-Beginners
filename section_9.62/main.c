/*
TIC TAC TOE - PvP
 */

#include "stdio.h"

int playerInputRow (void) {
	int row;

	for (int k = 0; k < 1;)
	{
		printf("Select row: \n");
		scanf("%d", &row);
		if (row <= 3 && row >= 0)
		{
			k++;
		} else
		{
			printf("Select value between 1 and 3!\n");
		}
	}

	return row;
}


int playerInputColumn (void) {
	int col;

	for (int k = 0; k < 1;)
	{
		printf("Select column: \n");
		scanf("%d", &col);
		if (col <= 3 && col >= 0)
		{
			k++;
		} else
		{
			printf("Select value between 1 and 3!\n");
		}
	}
	
	return col;
}



int main(int argc, char const *argv[])
{
	char board[3][3] = {
		{'0', '0', '0'},
		{'0', '0', '0'},
		{'0', '0', '0'}
	};

	char playerTurn (char marker) {
	int row;
	int column;
	playerInputRow();
	playerInputColumn();
	return board[row-1][column-2] = marker;
	}



	_Bool playerWinCondition (char marker) {
		for (int i = 0; i <= 2; ++i) //checks rows 
		{
			if (board[i][0] == marker && board[i][1] == marker && board[i][2] == marker)
			{
				return 1;
			}
		} 
		for (int j = 0; j <= 2; ++j) //checks columns 
		{
			if (board[0][j] == marker && board[1][j] == marker && board[2][j] == marker)
			{
				return 1;
			}
		} 
		for (int d = 0; d < 2; ++d) //checks diagonals
		{
			if (board[d][d] == marker && board[d][d] == marker && board[d][d] == marker)
			{
				return 1;
			}
		}
		return 0;
	}

	while (playerWinCondition('X') == 0 && playerWinCondition('O') == 0) {
		
		playerTurn('X');
		
		for (int i = 0; i <= 2; ++i)
		{
			for (int j = 0; j <= 2; ++j)
			{
				printf("%i \t\n", board[i][j]);
			}
			printf("\n");
		}
		
		playerTurn('O');

		for (int i = 0; i <= 2; ++i)
		{
			for (int j = 0; j <= 2; ++j)
			{
				printf("%i \t\n", board[i][j]);
			}
			printf("\n");
		}
	}

 



	return 0;
}