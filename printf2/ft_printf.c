/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 03:59:56 by syuto             #+#    #+#             */
/*   Updated: 2024/06/11 18:08:27 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf2(const char **format, va_list args, int *n)
{
	if (**format == 'c')
		*n += ft_putchar(va_arg(args, int));
	else if (**format == 's')
		ft_putstr(va_arg(args, char *), n);
	else if (**format == 'd' || **format == 'i')
		ft_printf_di(va_arg(args, int), n);
	else if (**format == 'u')
		ft_printf_u(va_arg(args, unsigned int), n);
	else if (**format == 'x')
		ft_printf_x(va_arg(args, unsigned long int), n);
	else if (**format == 'X')
		ft_printf_x2(va_arg(args, unsigned long int), n);
	else if (**format == 'p')
		ft_printf_p(va_arg(args, void *), n);
	else if (**format == '%')
		*n += ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		n;
	int		i;

	n = 0;
	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printf2(&format, args, &n);
		}
		else
			i += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (n);
}
