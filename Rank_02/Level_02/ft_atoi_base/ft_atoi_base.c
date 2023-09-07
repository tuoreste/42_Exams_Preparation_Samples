char	to_lower_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	get_digit(char c, int digit_base)
{
	int	max_digit;

	if (digit_base <= 10)
		max_digit = digit_base + '0';
	else
		max_digit = digit_base - 10 + 'a';
	if (c >= 0 && c <= 9 && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	dig;

	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (dig == get_digit(to_lower_case(*str), str_base))
	{
		res = res * str_base;
		res = res + (dig * sign);
		++str;
	}
	return (res);
}
