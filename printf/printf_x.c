/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:07:24 by syuto             #+#    #+#             */
/*   Updated: 2024/05/22 00:02:06 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void printf_x(unsigned int i) 
{
    char *hex_digits;
    int sign;
    hex_digits= "0123456789abcdef";
    sign=1;

    if (i < 0)
	{
		ft_putchar_fd('-', 1);
		sign = -1;
	}
    if (i >= 16) 
        printf_x(i / 16); 
    ft_putchar(hex_digits[i % 16]);
}


void printf_X(unsigned int i) 
{
    char *hex_digits;
    int sign;
    hex_digits = "0123456789ABCDEF";
    sign=1;

    if (i < 0)
	{
		ft_putchar_fd('-', 1);
		sign = -1;
	}
    if (i >= 16) 
        printf_X(i / 16);
    ft_putchar(hex_digits[i % 16]);
}

char printf_x(int i)
{
    char			digit;
    char    *change;
	unsigned int	nb;
	int				sign;

    change="abcdef";
	sign = 1;
	if (i < 0)
	{
		ft_putchar_fd('-', 1);
		sign = -1;
	}
	nb = i * sign;
	if (nb >= 10)
	{
		printf_x(nb % 16);
		digit = nb % 10 + '0';
		ft_putchar_fd(digit, 1);
	}
	else
	{
		digit = nb + '0';
		ft_putchar_fd(digit, 1);
	}
}
