#include <stdio.h>

int abs(int n)
{
	return (n < 0 ? -n : n);
}

int isQueenSafe(int *q_arr, int row, int col)
{
	int	i = 0;

	while (i <= row)
	{
		if (q_arr[i] == col)
			return 0;
		if (abs(q_arr[row - i] - col) == abs(row - i))
			return 0;
		i++;
	}
	return 1;
}

void findQueen(int *q_arr, int row)
{
	int	i = 0;
	int	flag = 0;

	while (i < 3)
	{
		if (isQueenSafe(q_arr, row, i))
			{
				q_arr[row] = i;
				flag = 1;
			}
		i++;
	}
	if (flag == 0)
		return ;
	findQueen(q_arr, row + 1);
}

int main(void)
{
	int	q_arr[4] = {0, };

	findQueen(q_arr, 0);
	printf("%d %d %d %d\n", q_arr[0], q_arr[1], q_arr[2], q_arr[3]);
}