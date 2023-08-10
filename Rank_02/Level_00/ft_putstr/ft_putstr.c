#include <unistd.h>
// #include <stdio.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

// //Commented is for testing purposes------------
// int main()
// {
// 	char	*str = "Hello world";
// 	ft_putstr(str);
// }
