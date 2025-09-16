/* *****************************ft_is_negative.c********************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:10:56 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/11 19:35:19 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb < 0)
	{
		write(1, "- ", 1);ft_is_negative.c
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = (nb % 10) + '0';
}

int	main(void)
{
	ft_putnbr(105);
	write (1, "\n", 1);
	return (0);
}
