/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:09 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/17 13:49:31 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_len;

	i = 0;
	str_len = 0;
	while (src[str_len])
		str_len++;
	if (size == 0)
		return (str_len);
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (str_len);
}

/*int main(int argc, char *argv[])
{
	char    dest[10];
	unsigned int    result;

	if(argc != 2)
		return (0);
	result = ft_strlcpy(dest, argv[1], 10);
	printf("Destination: '%s'\n", dest);
	printf("Source length: %u\n", result);
	printf("Bytes copied: %zu\n", sizeof(dest));
	return (0);
}*/