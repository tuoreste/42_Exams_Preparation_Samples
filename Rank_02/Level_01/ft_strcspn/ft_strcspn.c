#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// //Commented for testing purposes----------------
// int	main(void)
// {
// 	char	*str1 = "12345";
// 	char	*str2 = "67895";
// 	printf("%zu\n", ft_strcspn(str1, str2));
// }