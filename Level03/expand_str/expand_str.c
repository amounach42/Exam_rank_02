#include <unistd.h>

int main (int ac, char **av)
{
	int	i = 0;
	char *str = av[1];

	if (ac == 2)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				if (str[i + 1] > 32 && str[i + 1])
					write (1, "   ", 3);
			}
			else if (str[i] != ' ' && str[i] != '\t')
				write (1, str + i, 1);
			i++;

		}
	}
	write (1, "\n", 1);
}
