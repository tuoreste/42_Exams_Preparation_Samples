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
		write(1, &bit, 1);
		bit = ((octet >> i) & 1) + '0';
	}
}

// // Testing purposes
// int	main()
// {
// 	char c = 8;
// 	print_bits(c);
// }
