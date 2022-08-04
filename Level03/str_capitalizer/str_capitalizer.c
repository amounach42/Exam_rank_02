#include <unistd.h>
#include <stdio.h>

int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_alpha(int c)
{
	return (is_lower(c) || is_upper(c));
}

int str_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ) && is_alpha(str[i]))
		{
			if (is_lower(str[i]))
				str[i] -= 32;
		}
		else if (is_upper(str[i]))
			str[i] += 32;
				i++;
	}
	return i;
}

int main (int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		while (i < ac)
		{
			int	len = str_capitalizer(av[i]);
			write (1, av[i], len);
			write (1, "\n", 1);
			i++;
		}
	}
	else	
		write (1, "\n", 1);
}
