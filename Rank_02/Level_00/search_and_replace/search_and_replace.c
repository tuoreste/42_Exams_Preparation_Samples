#include <unistd.h>
int main(int argc, char **argv)
{
	int		i;
	char	*a;
	char	*b;
	char	*c;

	i = 0;
	a = argv[1];
	b = argv[2];
	c = argv[3];
	if (argc == 4)
	{
		while (a[i] != '\0')
		{
			if (a[i] == b[0])
				a[i] = c[0];
			else
				a[i] = a[i];
			write(1, &a[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
