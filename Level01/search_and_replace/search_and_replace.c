#include <unistd.h>

int main (int ac, char **av)
{
	int	i;
	char *str;

	str = av[1];
	i = 0;
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0') 
	{
		while (str[i])
		{
			if (str[i] == av[2][0])
				write (1, &av[3][0], 1);
			else
				write (1, str + i, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
