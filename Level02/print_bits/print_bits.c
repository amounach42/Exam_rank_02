#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	bits = 128;

	while (bits > 0)
	{
		if (octet >= bits)
		{
			write (1, "1", 1);
			octet %= bits;
			bits /= 2; 

		}
		else 
		{
			write (1, "0", 1);
			bits /= 2;
		}
	}
}

int main(void)
{
	print_bits(2);
	return 0;
}
