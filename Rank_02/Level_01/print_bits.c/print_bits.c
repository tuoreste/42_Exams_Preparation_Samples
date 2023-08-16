#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	bit = 0;
	i = 8;
	while (i--)
	{
		bit =  ((octet >> i) & 1) + '0' ;
		write(1, &bit, 1);
	}
}

// // Testing purposes
// int	main()
// {
// 	char c = 2;
// 	print_bits(c);
// }
