#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	checker(int c, char *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
			i++;
		while (argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		i--;
		while (k <= i)
		{
			if (checker(argv[1][k] ,argv[1], k) == 1)
				write(1, &argv[1][k], 1);
			k++;
		}
	}
	write (1, "\n", 1);
}
