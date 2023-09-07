#include <stdio.h>

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		l;
	int		i;
	char	temp;

	l = 0;
	i = 0;
	while (str[l] != '\0')
		l++;
	while (i < l / 2)
	{
		temp = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = temp;
		i++;
	}
	return (str);
}

// //Testing purposes
// int	main(void)
// {
// 	char *str = "reverse"; // Use a character array, not a string literal
// 	printf("%s\n", ft_strrev(str));
// 	return (0);
// }

