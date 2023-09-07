#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*res;
	int		n;
	int		len;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	n = nbr;
	len = 0;
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}

// //testing purposes
// int main()
// {
// 	int i = 1253;
// 	printf("%s", ft_itoa(i));
// }
