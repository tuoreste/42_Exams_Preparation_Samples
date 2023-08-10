//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		i;
	char	*cast;
	int		res;
	int		sign;

	i = 0;
	cast = (char *)str;
	res = 0;
	sign = 1;
	while (cast[i] != '\0')
	{
		if (cast[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (cast[i] == '+')
		{
			sign = 1;
			i++;
		}
		else if (cast[i] >= 48 && cast[i] <= 57)
		{
			res = (res * 10) + (cast[i] - '0');
			i++;
		}
	}
	return (res * sign);
}

// // Commented are for testing purposes only-----
// int main()
// {
// 	char *str = "+34512";
// 	printf("%d\n", ft_atoi(str));
// }
