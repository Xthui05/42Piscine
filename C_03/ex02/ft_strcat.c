/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:35:13 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/18 11:35:26 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int argc, char *argv[])
{
	// char    buffer[10];
	char *r;
	if (argc != 3)
		return (1);
	// ft_strcat(buffer, argv[1]);
	r = ft_strcat(argv[1], argv[2]);
	printf("%s\n", r);
	return (0);
}*/