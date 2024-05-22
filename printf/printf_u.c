/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:07:22 by syuto             #+#    #+#             */
/*   Updated: 2024/05/22 21:40:21 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

unsigned int	printf_u(unsigned int i, int *n)
{
	char			*decimal;

	decimal = "0123456789";
	if (i >= 10)
		printf_di(i / 10, n);
	n += write(1, decimal[i % 10], 1);
}
 