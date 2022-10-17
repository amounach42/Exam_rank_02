

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	unsigned int	j;
	int	swap = 0;

	j = size - 1;
	while (j > 0)
	{
		i = 0;
		int swapped = 0;
		while (i < j)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			break ;
		j--;
	}
}


#include <stdio.h>
int main ()
{
	int	tab[6] = {6, 5, 3, 4, -1, 2};
	int i = 0;

	sort_int_tab(tab, 6);	
	while (i <= 5)
		printf ("%d\n", tab[i++]);

}
