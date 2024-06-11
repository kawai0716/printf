/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:07:19 by syuto             #+#    #+#             */
/*   Updated: 2024/06/11 18:07:39 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_str_p(char *str, int *n)
{
	*n += ft_putstr("0x", n);
	if (!str)
		*n += ft_putchar('0');
	while (*str)
	{
		ft_printf_x((unsigned int)(*str), n);
		str++;
	}
	return (*n);
}

int	ft_printf_p(void *p, int *n)
{
	unsigned long	addr;

	addr = (unsigned long)p;
	*n += ft_putstr("0x", n);
	if (addr == 0)
	{
		*n += ft_putchar('0');
	}
	else
	{
		ft_printf_x((unsigned int)addr, n);
	}
	return (*n);
}
