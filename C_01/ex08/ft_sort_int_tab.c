/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:03:32 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 14:27:04 by txiao-hu         ###   ########.fr       */
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

void	ft_ptrarr(int *tab, int size)
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
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int main(void)
{
	int arr[] = {5, 1, 3, 2, 6, 4};
	int size;

	size = sizeof(arr) / sizeof(arr[0]);
	write(1, "Before: ", 8);
	ft_ptrarr(arr, size);
	write(1, "\n", 1);
	ft_sort_int_tab(arr, size);
	write(1, "After:  ", 8);
	ft_ptrarr(arr, size);
	write(1, "\n", 1);
	return(0);
}*/
