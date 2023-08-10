#include <stdio.h>
char    *ft_strrev_recursive(char *str, int start, int end)
{
	if (start >= end)
	{
		return str;
	}
	else
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		return ft_strrev_recursive(str, start + 1, end - 1);
	}
}

char    *ft_strrev(char *str)
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return ft_strrev_recursive(str, 0, length - 1);
}


int main()
{
	char	*str = "reverse";
	printf("%s\n", ft_strrev(str));
}
