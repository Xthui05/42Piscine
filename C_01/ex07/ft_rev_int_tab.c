/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:37:21 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 18:10:01 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_ptrnbr(int n)
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
}*/

/*void	ft_ptrarr(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_ptrnbr(tab[i]);
		if (i < size - 1)
		{
			write(1, ", ", 2);
		}
		i++;
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

/*int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5};
	int size;

	size = sizeof(arr) / sizeof(arr[0]);
	ft_rev_int_tab(arr, size);
	ft_ptrarr(arr, size);
	write(1, "\n", 1);
	return(0);
}*/
