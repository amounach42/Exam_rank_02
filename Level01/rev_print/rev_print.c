#include <unistd.h>

char *rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write (1, str + i, 1);
		i--;
	}
	return (str);
}
#include <stdio.h>

int main (int ac, char **av)
{
	(void)ac;
	char *str = av[1];
	rev_print(str);
}
