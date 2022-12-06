#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i ++;
	}
	return (result);
}

int main(void) {
	int n;

	scanf("%d", &n);
	printf("%d", ft_iterative_factorial(n));
}