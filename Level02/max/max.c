#include <stdlib.h>
#include <stdio.h>

int	max(int	*tab, unsigned int len)
{
	unsigned int	i;
	int	max = 0;

	i = 0;
	max = tab[i]; 
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
int main ()
{
	int tab[5] = {15, 0, -18, 100, 6};
	int	a = max(tab, 5);
	printf ("%d",a);
}
