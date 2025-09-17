/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:20:33 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/17 11:46:30 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_words;

	i = 0;
	new_words = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
		{
			if (new_words && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!new_words && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			new_words = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			new_words = 0;
		else
			new_words = 1;
		i++;
	}
	return (str);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		return (0);
// 	}
// 	ft_strcapitalize(argv[1]);
// 	printf("%s\n", argv[1]);
// 	return (0);
// }
