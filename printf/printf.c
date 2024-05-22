/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 03:59:56 by syuto             #+#    #+#             */
/*   Updated: 2024/05/20 20:31:37 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void printf(const char *format, ...)
{
    va_list args;
    
    va_start(args,format);
    while(*format)
    {
        if(*format == '%')
        {
            format++;
            if (*format == 'c')
                ft_putchar(va_arg(args, int));
            else if (*format == 's')
                ft_putstr(va_arg(args, char *));
            else if (*format == 'd' || *format == 'i')
                printf_d(va_arg(args, int));
            else if (*format == 'x')
                printf_x(va_arg(args, unsigned int));
            else if (*format == 'X')
                printf_Xo(va_arg(args, unsigned int));
            else if (*format == '%')
                ft_putchar('%');
        }
        else
            ft_putchar(*format);
        format++;
    }
    va_end(args);
}