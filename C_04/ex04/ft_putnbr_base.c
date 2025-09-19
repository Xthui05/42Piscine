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
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < base_len)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int unbr;
	int base_len;

	if (!is_valid_base(base))
	{
		write(1, "Invalid base", 12);
		return ;
	}
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		ft_putchar('-');
		unbr = -nbr;
	}
	else
	{
		unbr = nbr;
	}
	if (unbr >= (unsigned int)base_len)
		ft_putnbr_base(unbr / base_len, base);
	ft_putchar(base[unbr % base_len]);
}

/*int	main(void)
{
	ft_putnbr_base(42, "0123456789ABCDEF");  // Hex: FF
	ft_putchar('\n');

	ft_putnbr_base(42, "01");  // Binary: 00101010
	ft_putchar('\n');

	ft_putnbr_base(42, "01234567");  // Octal: 52
	ft_putchar('\n');

	ft_putnbr_base(42, "0123456789");  // Decimal: 123
	ft_putchar('\n');

	return (0);
}*/