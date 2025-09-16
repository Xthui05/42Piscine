/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:23:48 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 14:26:11 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ptrnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_ptrnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
	write(1, "div: ", 5);
	ft_ptrnbr(*div);
	write(1, " | ", 3);
	write(1, "mod: ", 5);
	ft_ptrnbr(*mod);
}

/*int main(void)
{
	int i;
	int j;
	int div;
	int mod;

	i = 19;
	j = 3;
	ft_div_mod(i, j, &div, &mod);

	write(1, "\n", 1);
	return(0);
}*/
