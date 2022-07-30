#include <unistd.h>

int is_upper (char c)
{
	return (c >= 'A' && c <= 'Z');
}

int main (int ac, char **av)
{
	int	i;
	char *str;

	i = 0;
	str = av[1];
	if (ac == 2)
	{	
		while (str[i])
		{
			if (is_upper(str[i + 1]))
			{
				str[i + 1] += ' ';
				write (1, str + i, 1);	
				write(1, "_", 1);
			}
			else 
				write (1, str + i, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
