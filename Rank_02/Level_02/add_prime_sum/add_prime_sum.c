#include <stdio.h>
#include <unistd.h>

int	atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (!str[i])
		return (0);
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == ' ' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i] == '-')
			sign = -1;
	while (str[i])
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}

void	put_nbr(int n)
{
	char	c;

	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	else if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
}

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	nb;
	int	sum;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		sum = 0;
		while (nb > 1)
			if (is_prime(nb--))
				sum += (nb + 1);
		put_nbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
