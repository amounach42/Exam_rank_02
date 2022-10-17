#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int is_ws(char c)
{
	return (c == ' ' || c == '\t');
}

void	 print_until_ws(char *line, int *i, int len)
{
	while ((*i) < len && line[*i] != 0)
	{
		write(1, line + (*i), 1);
		(*i)++;
	}
}

int main (int ac, char **av)
{
	if (ac > 1)
	{
		char *line = av[1];
		int len = 0;
		int i = 0;

		while (is_ws(*line))
			line++;
		char *fword = line;
		while (line[i])
		{
			if (is_ws(line[i]))
				lien[i] = 0;
			len++;
			i++;
		}
		len -= strlen(fword);
		line = line
	}
}
