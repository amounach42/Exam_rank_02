#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int main (int ac, char **av)
{
	int	i;
	char *str;

	str = av[1];
	i = 0;
	if (ac == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
				ft_putchar(str[i]+ 13);
			else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
				ft_putchar(str[i] - 13);
			else 
				ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar(10);
}
