#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (int ac, char **av)
{
	int	i;
	char *str;

	i = 0;
	str = av[1];
	if (ac == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
				ft_putchar (str[i] + 1);
			else if (str[i] == 'z' || str[i] == 'Z')
				ft_putchar (str[i] - 25);
			else 
				ft_putchar (str[i]);
			i++;
		}
	}
	ft_putchar(10);
}
