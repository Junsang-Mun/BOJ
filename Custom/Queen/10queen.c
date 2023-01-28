#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

void printAnswer(int *board)
{
	printf("%d%d%d%d%d%d%d%d%d%d\n", board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8], board[9]);
}

int isQueenSafe(int *board, int numOfQueen, int i)
{
	int	j;

	j = 0;
	while (j < numOfQueen)
	{
		if (board[j] == i || abs(numOfQueen - j) == abs(i - board[j]))
			return 0;
		j++;
	}
	return 1;
}

void findQueen(int *board, int numOfQueen)
{
	int	i;

	i = 0;
	if (numOfQueen == MAX_SIZE)
	{
		printAnswer(board);
		return ;
	}
	while (i < MAX_SIZE)
	{
		if (isQueenSafe(board, numOfQueen, i))
		{
			board[numOfQueen] = i;
			findQueen(board, numOfQueen + 1);
		}
		i++;
	}
}

int main(void)
{
	int	board[MAX_SIZE];

	findQueen(board, 0);
	return (0);
}
