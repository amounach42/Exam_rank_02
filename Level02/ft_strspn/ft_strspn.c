#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (ft_strchr(accept, *s))
			i++;
		else 
			break;
		s++;
	}
	return (i);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main (void)
{
	char	s[] = "123456abcdef";
	char	accept[] = "0123456789";

	size_t pos = ft_strspn(s, accept);
	char	*remaining = s + pos;	
	printf ("%lu\n", strspn(s, accept));
	printf ("%lu -> %s\n", pos, remaining);

}
