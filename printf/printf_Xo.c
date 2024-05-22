/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_Xo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:28:09 by syuto             #+#    #+#             */
/*   Updated: 2024/05/22 14:45:35 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	printf_Xo(unsigned long int i, int *n)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (i >= 16)
		printf_Xo(i / 16, n);
	*n += write(1, hex_digits[i % 16], 1);
}
