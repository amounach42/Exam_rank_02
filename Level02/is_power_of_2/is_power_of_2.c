/*
int	is_power_of_2(unsigned int n)
{
	unsigned int i = 1;
	if (i < 1)
		return (0);
	else
	{
		while (i <= n)
		{
			if (i == n)
				return (1);
			i *= 2;
		}
	}
	return (0);
}*/

int	next_power_of_2(int n)
{
	return (n << 2);
}
#include <stdio.h>
int main ()
{
	unsigned int n = 8;
	int a = next_power_of_2(n);
	printf ("%d", a);
}

