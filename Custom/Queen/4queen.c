#include <stdio.h>
#include <stdlib.h>

void printAnswer(int *q_arr)
{
	printf("%d %d %d %d\n", q_arr[0], q_arr[1], q_arr[2], q_arr[3]);
}

int isQueenSafe(int *q_arr, int row, int col)
{
	int	i = 0;

	if (row == 0)
		return 1;
	while (i < col)
	{
		if (q_arr[i] == q_arr[col] || abs(q_arr[i] - q_arr[col]) == abs(i - col))
			return 0;
		i++;
	}
	return 1;
}

void findQueen(int *q_arr, int row)
{
	int	col = 0;

	if (row >= 4)
	{
		printAnswer(q_arr);
		return ;
	}
	while (col < 4)
	{
		if (isQueenSafe(q_arr, row, col))
		{
			q_arr[row] = col;
			findQueen(q_arr, row + 1);
		}
		else
			col++;
	}
	if (col >= 4)
	{
		printf("Error! No Answer");
	}
}

int main(void)
{
	int	q_arr[4];

	findQueen(q_arr, 0);
	return (0);
}
