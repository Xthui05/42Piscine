/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:11:49 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 14:26:43 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_strlen(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_print_strlen(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_ptrstr_len(char *str)
{
	int	length;

	length = ft_strlen(str);
	ft_print_strlen(length);
}

/*int main(void)
{
	char    *s;

	s = "Hello 42KL!";
	ft_strlen(s);
	ft_ptrstr_len(s);
	write(1, "\n", 1);
	return(0);
}*/