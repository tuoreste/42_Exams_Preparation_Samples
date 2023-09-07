#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
// // Testing
// int	main()
// {
// 	char *s1 = "Hi";
// 	char *s2 = "Hey";
// 	printf("%d\n", ft_strcmp(s1, s2));
// }
