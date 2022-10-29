#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define WD_NUM 1000
#define WD_LEN 1000

int is_ws(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char **ft_split(char *str)
{
    char **tab;
    int i = 0;
    int j = 0;
    int k;

    if(!str)
        return(NULL);
    tab = (char **)malloc(sizeof(char **) * WD_NUM);
    if(!tab)
        return(NULL);
    while(is_ws(str[i]))
        i++;
    while(str[i] != '\0')
    {
        if(!is_ws(str[i]))
        {
            k = 0;
            tab[j] = (char *)malloc(sizeof(char) * WD_LEN);
            if(!tab[j])
                return(NULL);
            while(!is_ws(str[i]) && str[i])
                tab[j][k++] = str[i++];
            tab[j][k] = 0;
            j++;
        }
        else
            i++;
    }
    tab[j] = 0;
    return(tab);
}

int main(int ac, char **av)
{
	(void)ac;
	char **ret;
	int i = 0;
	ret = ft_split(av[1]);

	while(ret[i])
		printf("%s\n", ret[i++]);
}
