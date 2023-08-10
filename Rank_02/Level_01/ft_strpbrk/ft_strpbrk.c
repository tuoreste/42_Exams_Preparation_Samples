#include <stdio.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;
	char	*cast1;
	char	*cast2;


	i = 0;
	cast1 = (char *)s1;
	cast2 = (char *)s2;
	while (*cast1 != '\0')
	{
		i = 0;
		while (cast2[i] != '\0')
		{
			if (*cast1 == cast2[i])
				return (cast1);
			i++;
		}
		cast1++;
	}
	return (NULL);
}

// //Commented for testing purporses---------
// int	main()
// {
// 	char *s1 = "Hello1Hey";
// 	char *s2 = "work1Hey";
// 	printf("%p\n", ft_strpbrk(s1, s2));
// }