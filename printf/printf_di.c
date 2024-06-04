/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:07:08 by syuto             #+#    #+#             */
/*   Updated: 2024/06/04 10:52:51 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printf_di(int i, int *n)
{
	char			*decimal;
	unsigned int	nb;
	int				sign;

	decimal = "0123456789";
	sign = 1;
	if (i == -2147483648)
	{
		*n += write(1, -2147483648, 11);
	}
	if (i < 0)
	{
		ft_putchar_fd('-', 1);
		sign = -1;
	}
	nb = i * sign;
	if (nb >= 10)
		printf_di(nb / 10, n);
	*n += write(1, decimal[nb % 10], 1);
	return (*n);
}
