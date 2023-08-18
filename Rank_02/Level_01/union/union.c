#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	union_funct(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		while (str1[j] != '\0')
		{
			if (str1[i] == str1[j])
				i++;
			j++;
		}
		write(1, &str1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		union_funct(argv[1], argv[2]);
	write(1, "\n", 1);
}
