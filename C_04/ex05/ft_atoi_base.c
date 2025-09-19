#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int i;
	int j;
	int base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int num;
	int base_len;
	int result;
	int multiplier;

	if (!(is_valid_base(base)))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	num = ft_atoi(str);
	result = 0;
	multiplier = 0;
	int is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num > 0)
	{
		result += (num % base_len) * multiplier;
		num /= base_len;
		multiplier *= 10;
	}
	if (is_negative)
		result = -result;
	return (result);
}

int	main(void)
{
	// Test cases
	int r;
	r = ft_atoi_base("42", "0123456789"); // Decimal: 42
	printf("%i\n", r);

	r = ft_atoi_base("42", "01"); // Binary: 101010
	printf("%i\n", r);

	r = ft_atoi_base("42", "01234567"); // Octal: 52
	printf("%i\n", r);

	r = ft_atoi_base("42", "0123456789ABCDEF"); // Hex: 2A
	printf("%i\n", r);

	r = ft_atoi_base("-42", "0123456789"); // Decimal: -42
	printf("%i\n", r);

	return (0);
}
