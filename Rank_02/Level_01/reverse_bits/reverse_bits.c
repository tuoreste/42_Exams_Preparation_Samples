#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

// //Testing purpose
// int	main(void)
// {
// 	unsigned char c;

// 	c = '&';
// 	write(1, &c, 1);
// 	write(1, "\n", 1);
// 	c = reverse_bits(c);
// 	write(1, &c, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }
