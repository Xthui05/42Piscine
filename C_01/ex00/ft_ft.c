/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:24:27 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 14:25:24 by txiao-hu         ###   ########.fr       */
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

void	ft_ft(int *nbr)
{
	*nbr = 42;
	ft_putnbr(*nbr);
}

/*int main(void)
{
	int i;

	i = 12;
	ft_ft(&i);
	write(1, "\n", 1);
	return(0);
}*/