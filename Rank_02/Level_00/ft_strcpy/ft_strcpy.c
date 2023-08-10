// #include <stdio.h>
// #include <stdlib.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// //Commented is for testing purposes-----------------------
// int	str_len(char *str)
// {
// 	int i = 0;

// 	while (str[i] != '\0')
// 		i++;
// 	return(i);
// }

// int	main()
// {
// 	char	*str = "Return a copy of me";
// 	char	*copy = (char *)malloc(sizeof(char) * str_len(str));
// 	printf("%s\n", ft_strcpy(copy, str));
// }
