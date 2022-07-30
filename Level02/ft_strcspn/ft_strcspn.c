#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *charset)
{
	int	i;

	i = 0;
	while (s[i])
	{
		int	j = 0;
		while (charset[j])
		{
			if (s[i] == charset[j])
				return (i);
			i++;
		}
	}
	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>
int main ()
{
	char s[] ="amounach23456789";
	char charset[] = "3456789";

	size_t t = strcspn(s, charset);
	printf ("%lu ",t);
}
