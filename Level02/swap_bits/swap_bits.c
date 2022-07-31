#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits (unsigned char octet)
{
	int	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write (1, "1", 1);
			octet %= i;
			i /= 2;
		}
		else 
		{
			write (1, "0", 1);
			i /= 2;
		}
	}
}

int main ()
{
	unsigned char a = swap_bits(146);
	print_bits(a);
}
