/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/09/13 17:41:26 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/13 17:41:26 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (j == x - 1 && i == y - 1 && y > 1
					&& x > 1))
				ft_putchar('/');
			else if ((j == x - 1 && i == 0) || (j == 0 && i == y - 1))
				ft_putchar('\\');
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
