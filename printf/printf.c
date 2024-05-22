/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 03:59:56 by syuto             #+#    #+#             */
/*   Updated: 2024/05/22 15:01:59 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
	va_list			args;
    int             i;

    i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
            
			// if (*format == 'c')
			// 	ft_putchar_fd(va_arg(args, int), 1);
			// else if (*format == 's')
			// 	ft_putstr_fd(va_arg(args, char *), 1);
			// else if (*format == 'd' || *format == 'i')
			// 	printf_d(va_arg(args, int), &n);
			// else if (*format == 'u')
			// 	printf_u(va_arg(args, unsigned int));
			// else if (*format == 'x')
			// 	printf_x(va_arg(args, unsigned long int), &n);
			// else if (*format == 'X')
			// 	printf_Xo(va_arg(args, unsigned long int), &n);
			// else if (*format == 'p')
			// 	printf_p(va_arg(args, void *));
			// else if (*format == '%')
			// 	ft_putchar_fd('%', 1);
		}
		else
			i += write(1, format, 1);
		format++;
	}
	va_end(args);
}
