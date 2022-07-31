#include <unistd.h>

int main (int ac, char **av)
{
	char hash[256] = {0};
	char *str1 = av[1];
	char *str2 = av[2];

	while (*str2)
	{
		hash[(int)*str2] = 1;
		str2++;
	}
	while (*str1)
	{
		if (hash[(int)*str1] == 1)
		{
			write (1, str1, 1);
			hash[(int)*str1] = 0;
		}
		str1++;
	}
	write (1, "\n", 1);
}


