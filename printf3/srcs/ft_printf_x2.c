/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:37:49 by sykawai           #+#    #+#             */
/*   Updated: 2024/06/11 18:08:02 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x2(unsigned long int i, int *n)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (i >= 16)
		ft_printf_x2(i / 16, n);
	*n += write(1, &hex_digits[i % 16], 1);
	return (*n);
}
