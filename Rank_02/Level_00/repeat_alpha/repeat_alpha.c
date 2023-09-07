#include <stdio.h>
#include <unistd.h>

void	ft_putchar_n(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	t;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			t = argv[1][i];
			if (t >= 97 && t <= 122)
				ft_putchar_n(t, t - 96);
			else if (t >= 65 && t <= 90)
				ft_putchar_n(t, t - 64);
			else
				write(1, &t, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
