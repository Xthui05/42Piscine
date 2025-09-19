/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/09/19 12:00:33 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/19 12:00:33 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdlib.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

// int main (int argc, char *argv[])
// {
//     int number;
//     if (argc != 2)
//         return (0);
//     number = atoi(argv[1]);
//     ft_putnbr(number);
//     write(1, "\n", 1);
//     return(0);
// }
