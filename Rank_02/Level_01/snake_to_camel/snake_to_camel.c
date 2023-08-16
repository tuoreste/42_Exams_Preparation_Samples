#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*snake_to_camel(char *str)
{
	int		i;
	int		j;
	int		k;
	char	*new_str;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '_')
			j++;
		i++;
	}
	k = i - j;
	i = 0;
	new_str = (char *)malloc(sizeof(char) * k + 1);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == '_')
		{
			i++;
			new_str[j] = str[i] + 32;
		}
		else
			new_str[j] = str[i];
		j++;
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
}
