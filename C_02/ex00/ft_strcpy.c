/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:00:26 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 16:14:57 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	write(1, "\n", 1);
	return (dest);
}

/*int main(void)
{
	char    *s;
	char    *d;

	d = malloc(sizeof(s));
	s = "Hello World!";
	*ft_strcpy(d, s);
	free(d);
	return(0);
}*/