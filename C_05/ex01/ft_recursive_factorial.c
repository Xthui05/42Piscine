/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:48:04 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/19 12:48:05 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include < stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}

int	main(int argc, char *argv[])
{
	int r;
	int nbr;

	if (argc != 2)
		return (0);
	nbr = atoi(argv[1]);
	r = ft_iterative_factorial(nbr);
	printf("%i : %i\n", nbr, r);
	return (0);
}