//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// //Commented is for testing purposes----------
// int	main()
// {
// 	char	*str = "0123456789";
// 	printf("%d\n", ft_strlen(str));
// }
