#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int is_ws(char c)
{
	return (c == ' ' || c == '\t');
}

void	print_until_ws(char *line, int *i, int len)
{
	int flag = 0;
	while ((*i) < len && line[*i] == 0)
		(*i)++;

	while (*i < len && line[*i] != 0)
	{
		write (1, line + (*i), 1);
		flag = 1;
		(*i)++;
	}
	if (flag)
		write (1, " ", 1);
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
				line[i] = 0;
			len++;
			i++;
		}

		len -= strlen(fword);
		line = line + strlen(fword) + 1;
		i = 0;
		while (i < len)
		{
			print_until_ws(line, &i, len);
			i++;
		}
		write (1, fword, strlen(fword));
	}
	write (1, "\n", 1);
}

