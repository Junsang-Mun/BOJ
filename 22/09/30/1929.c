#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int main(void) {
	int min, max;

	scanf("%d %d", &min, &max);
	for (; min <= max; min ++) {
		if (ft_is_prime(min) != 0) {
			printf("%d\n", min);
		}
	}
	return 0;
}