#include <unistd.h>

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
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'm' - (str[i] - 'n');
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = 'M' - (str[i] - 'N');
			write (1, str + i, 1);
			i++;

		}
	}
}
