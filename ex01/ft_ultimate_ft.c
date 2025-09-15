/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:24:13 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 21:24:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int  n)
{
    char    c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
    ft_putnbr(*********nbr);
}

/*int main(void)
{
    int value;
    int *i = &value;
    int **i1 = &i;
    int ***i2 = &i1;
    int ****i3 = &i2;
    int *****i4 = &i3;
    int ******i5 = &i4;
    int *******i6 = &i5;
    int ********i7 = &i6;
    int *********i8 = &i7;

    ft_ultimate_ft(i8);
    write(1, "\n", 1);
    
    return 0;
}*/