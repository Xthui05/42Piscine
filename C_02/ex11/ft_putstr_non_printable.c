/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:04:52 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/17 15:48:54 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex_digits;
	unsigned char	c;

	i = 0;
	hex_digits = "0123456789abcdef";
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (str[i] >= 21 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &hex_digits[c / 16], 1);
			write(1, &hex_digits[c % 16], 1);
		}
		i++;
	}
}

/*int	main(void)
{
	char	*s;

	s = "Hello\nHow are you?";
	ft_putstr_non_printable(s);
	write(1, "\n", 1);
	return (0);
}*/
