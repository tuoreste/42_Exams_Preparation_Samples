//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// //Commented is for testing purposes----------
// int	main()
// {
// 	int	a = 1;
// 	int b = 2;
// 	printf("a = %d b = %d", a, b);
// 	printf("\n");
// 	ft_swap(&a,&b);
// 	printf("a = %d b = %d", a, b);
// }
