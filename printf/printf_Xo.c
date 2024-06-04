/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_Xo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:28:09 by syuto             #+#    #+#             */
/*   Updated: 2024/06/04 10:53:37 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printf_Xo(unsigned long int i, int *n)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (i >= 16)
		printf_Xo(i / 16, n);
	*n += write(1, hex_digits[i % 16], 1);
	return (*n);
}
