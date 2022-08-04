#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strchr(const char *str, char c, int base)
{
	int i = 0;
	while (str[i] && i < base)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	mitirix(const char *str, int base)
{
	char *tab = "0123456789abcdef";
	int	res = 0;
	int	i = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (base >= 2)
	{
		while (str[i])
		{
			if (!ft_strchr(tab, str[i], base))
					return (res * sign);
			else if (str[i] >= 48 && str[i] <= 57)
				res = res * base + str[i] - 48;
			else if (str[i] >= 65 && str[i] <= 70)
                res = res * base + str[i] - 55;
			else if (str[i] >= 97 && str[i] <= 102)
                res = res * base + str[i] - 87;
			i++;
		}
	}
	return (res * sign);
}

int main(int ac, char **av)
{
	int ret = mitirix(av[1], atoi(av[2]));
	printf("%d\n", ret);
}
