/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:51:39 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 14:25:56 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_putchar(int a, int b)
{
	ft_putnbr(a);
	write(1, " ", 1);
	ft_putnbr(b);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int main(void)
{
	int i;
	int j;

	i = 5;
	j = 10;

	ft_swap(&i, &j);
	ft_putchar(i, j);
	write(1, "\n", 1);
	return(0);
}*/