#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
	int n1;
	char op;
	int n2;
	int res;

	n1 = atoi(av[1]);
	op = av[2][0];
	n2 = atoi(av[3]);
	res = 0;
	if (ac == 4)
	{
		if (op == '+')
			res = n1 + n2;
		else if (op == '-')
			res = n1 - n2;
		else if (op == '/' && n2 != 0)
			res = n1 / n2;
		else if (op == '*')
			res = n1 * n2;
		else if (op == '%')
			res = n1 % n2;
		printf("%d", res);
	}
	printf("\n");
}
