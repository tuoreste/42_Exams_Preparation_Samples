#include <unistd.h>

void	write_num(int n)
{
	char	str[10] = "0123456789";

	if (n > 9)
		write_num(n / 10);
	write(1, &str[n % 10], 1);
}

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 9);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_num(i);
		write(1, "\n", 1);
		i++;
	}
}
