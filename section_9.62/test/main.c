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

	int row = 0;
	int col = 0;
	int player1Wins = 0;
	int player2Wins = 0;




	int playerWinCondition (char marker) {
		for (int i = 0; i <= 2; ++i) //checks rows
		{
		    //printf("1 \n");
			if (board[i][0] == marker && board[i][1] == marker && board[i][2] == marker)
			{
			    //printf("2");
				return 1;
			}
		}
		for (int j = 0; j <= 2; ++j) //checks columns
		{
		    //printf("3 \n");
			if (board[0][j] == marker && board[1][j] == marker && board[2][j] == marker)
			{
			    //printf("4");
				return 1;
			}
		}
        if (board[1][1] == marker && board[2][2] == marker && board[3][3] == marker)
        {
            //printf("6 \n");
            return 1;
        }
        if (board[1][3] == marker && board[2][2] == marker && board[3][1] == marker)
        {
            //printf("6 \n");
            return 1;
        }

		return 0;
	}

	while (player1Wins == 0 && player2Wins == 0) {

        printf("Player 1's turn: \n");

		//playerTurn('X');

        row = playerInputRow();
        //printf("%i", row);
        col = playerInputColumn();
        board[row-1][col-1] = 'X';

		for (int i = 0; i <= 2; ++i)
		{
			for (int j = 0; j <= 2; ++j)
			{
				printf("%c \t", board[i][j]);
			}
			printf("\n");
		}

		printf("Player 2's turn: \n");

		row = playerInputRow();
        col = playerInputColumn();
        board[row-1][col-1] = 'O';

		for (int i = 0; i <= 2; ++i)
		{
			for (int j = 0; j <= 2; ++j)
			{
				printf("%c \t", board[i][j]);
			}
			printf("\n");

        player1Wins = playerWinCondition('X');
        player2Wins = playerWinCondition('O');

        //printf("%i, %i", player1Wins, player2Wins);
		}
	}





	return 0;
}
