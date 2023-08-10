#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1])) + (atoi(argv[3])));
		else if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1])) - (atoi(argv[3])));
		else if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1])) * (atoi(argv[3])));
		else if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1])) / (atoi(argv[3])));
		else if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1])) % (atoi(argv[3])));
	}
	printf("\n");
	return (0);
}
