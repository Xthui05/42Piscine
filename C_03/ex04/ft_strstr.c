/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txiao-hu <txiao-hu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:16:32 by txiao-hu          #+#    #+#             */
/*   Updated: 2025/09/18 13:16:33 by txiao-hu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i - j + 1]);
		}
		i++;
	}
	return (0);
}
// printf("Comparing str[%d] = '%c' with to_find[%d] = '%c'\n", i,
// str[i], j, to_find[j]);

// printf("Matching str[%d + %d] = '%c' with to_find[%d] = '%c'\n", i, j, 
//str[i + j], j, to_find[j]);
// printf("Match found at str[%d]\n", i);
int	main(int argc, char *argv[])
{
	char	*s;

	if (argc != 3)
		return (0);
	s = ft_strstr(argv[1], argv[2]);
	if (s)
		printf("Found: %s\n", s);
	else
		printf("Substring not found\n");
	return (0);
}

/*int	main(void)
{
	char *str;
	char *tofind;
	char *result;

	str = "Hello Worlds!";
	tofind = "Worlds";
	result = ft_strstr(str, tofind);
	printf("%s\n", result);
	return (0);
}*/