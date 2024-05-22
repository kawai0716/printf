/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:07:24 by syuto             #+#    #+#             */
/*   Updated: 2024/05/22 14:45:14 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	printf_x(unsigned long int i, int *n)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (i >= 16)
		printf_x(i / 16, n);
	*n += write(1, hex_digits[i % 16], 1);
}

// #include <stdio.h>

// int main() 
// {
//     int i = 12345;

//     printf("hexadecimal: %x\n", i);
//     return 0;
// }