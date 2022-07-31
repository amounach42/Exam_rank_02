#include <unistd.h>

int main (int ac, char **av)
{
	char hash[256] = {0};
	char *str1 = av[1];
	char *str2 = av[2];

	if (ac == 3)
	{
		while (*str1)
		{
			if (hash[(int)*str1] != 1)
			{
				hash[(int)*str1] = 1;
				write (1, str1, 1);
			}
			else
				str1++;
		}
		while (*str2)
		{
			if (hash[(int)*str2] == 0)
			{
				hash[(int)*str2] = 1;
				write (1, str2, 1);
			}
			str2++;
		}
	}
	write (1, "\n", 1);
}
