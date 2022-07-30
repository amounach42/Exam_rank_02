int	ft_strlen(char *str)
{
	int	i = 0;
	while (*(str++))
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char tmp;

	i = 0;
	len = ft_strlen(str);
	len--;
   	while (i < len)
   	{
	   tmp = str[i];
	   str[i] = str[len];
	   str[len] = tmp;
	   i++;
	   len--;
   	}
	return (str);   
}

#include <stdio.h>
int main (int ac, char **av)
{
	char *str = av[1];
	ft_strrev(str);
	printf ("%s\n", str);
}




