/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:40:10 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/16 14:25:02 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_ptrnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_ptrnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/*int	main(int argc, char *argv[])
{
	int	result;

	if (argc != 2)
	{
		return (1);
	}
	result = ft_str_is_numeric(argv[1]);
	ft_ptrnbr(result);
	write(1, "\n", 1);
	return (0);
}*/
