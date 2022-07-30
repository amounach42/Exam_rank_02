#include <stdlib.h>
char	*ft_strpbrk(const char *s, const char *charset)
{
	int	i = 0;
	
	char *str = (char *)s;
	while (str[i])
	{
		int	j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				return (&str[i]);
			i++;
		}
	}
	return NULL;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char s[] ="amounach065352";
    char charset[] = "0123456789";

    char *match  = ft_strpbrk(s, charset);
    printf ("%s\n", match);

	printf ("%s\n", strpbrk(s, charset));
}

