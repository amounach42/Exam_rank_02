#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (*(str++))
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i = 0;
	char *copy;
	int	len = ft_strlen(src);

	if (!(copy = (char *) malloc(len + 1)))
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}


