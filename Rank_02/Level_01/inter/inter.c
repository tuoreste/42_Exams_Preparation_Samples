#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	find_common_chars(char *str1, char *str2)
{
	int	str1_len;
	int	str2_len;
	int	i;

	str1_len = ft_str_len(str1);
	str2_len = ft_str_len(str2);
	int found[256] = {0};
	i = 0;
	while (i < str2_len)
	{
		found[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (i < str1_len)
	{
		if (found[(int)str1[i]])
		{
			write(1, &str1[i], 1);
			found[(int)str1[i]] = 0;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;

	if (argc != 3)
	{
		write(1, "\n", 1);
	}
	else
	{
		str1 = argv[1];
		str2 = argv[2];
		find_common_chars(str1, str2);
	}
	return (0);
}
