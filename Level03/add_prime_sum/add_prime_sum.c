#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	int sign = 1;
	
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;	
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] -'0';
	return (res * sign);
}

int	is_prime(int n)
{
	int	i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(n)
{
	int	i = 2;
	int	sum= 0;

	if (n <= 0)
		return (0);
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

int main (int ac, char **av)
{
	int	sum = 0;

	if (ac == 2)
		ft_putnbr(add_prime_sum(ft_atoi(av[1])));
	else 
		ft_putnbr(0);
	write (1, "\n", 1);
}
