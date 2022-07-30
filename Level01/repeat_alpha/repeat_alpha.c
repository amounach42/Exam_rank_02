#include <unistd.h>
#include "stdio.h"
#include "string.h"

int	get_index(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		return c - 'A' + 1;
	return (1);
}

int main (int ac, char **av)
{
	int	i = 0;
	char *str = av[1];

	if (ac == 2)
	{
		while (str[i])
		{
			int l = get_index(str[i]);
			while (l--)
				write (1, str + i, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
