#include <unistd.h>

int main (int ac, char **av)
{
	int		i;
	char	*str;
	char	last;

	i = 0;
	str = av[1];
	if (ac == 2)
	{
		while (str[i])
			i++;
		i--;
		while (str[i] != ' ' && str[i] != '\t' && i >= 0)
			i--;
		i++;
		while (str[i])
		{
			write (1, str + i, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
