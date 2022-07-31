int is_power_of_2(unsigned int n)
{
	return (n != 0) && ((n & (n - 1)) == 0);
}

#include <stdio.h>
int main ()
{
	unsigned int n = 16;
	int a = is_power_of_2(n);
	printf ("%d", a);
}

