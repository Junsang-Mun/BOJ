#include <stdio.h>
int maxi(int *n)
{
	int max = 0;
	for (int i = 0; i < 3; i ++)
	{
		if (max < n[i])
		{
			max = n[i];
		}
	}
	return max;
}

int main(void)
{
	int n[3];
	for (int i = 0; i < 3; i ++)
	{
		scanf("%d", &n[i]);
	}
	if (n[0] == n[1] && n[1] == n[2])
	{
		printf("%d", 10000 + (1000 * n[0]));
	}
	else if (n[0] == n[1])
	{
		printf("%d", 1000 + (100 * n[0]));
	}
	else if (n[1] == n[2])
	{
		printf("%d", 1000 + (100 * n[1]));
	}
	else if (n[0] == n[2])
	{
		printf("%d", 1000 + (100 * n[2]));
	}
	else
	{
		printf("%d", 100 * maxi(n));
	}
}