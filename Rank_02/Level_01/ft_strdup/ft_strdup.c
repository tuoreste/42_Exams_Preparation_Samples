#include <stdlib.h>
//#include <unistd.h>
//#include <stdio.h>
char    *ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	while (src[i] != '\0')
		i++;
	dst = (char *)malloc(sizeof(char) * i + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

// //Commented is for testing purposes only-----
// int main()
// {
// 	char	*str = "Hello";
// 	printf("%s\n", ft_strdup(str));
// }
