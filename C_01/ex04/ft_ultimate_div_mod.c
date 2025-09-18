/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:36:41 by marvin            #+#    #+#             */
/*   Updated: 2025/09/17 10:58:22 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_ptrnbr(int n)
{
	char	c;

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
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
	//write(1, "a: ", 3);
	//ft_ptrnbr(*a);
	//write(1, " | ", 3);
	//write(1, "b: ", 3);
	//ft_ptrnbr(*b);

/*int main(void)
{
	int a;
	int b;

	a = 19;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
}*/
