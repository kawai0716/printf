/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:07:19 by syuto             #+#    #+#             */
/*   Updated: 2024/06/04 10:54:12 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printf_str_p(char *str, int *n) 
{
    *n += ft_putstr("0x", n);
    if(!str)
        *n += ft_putchar('0');
    while (*str) 
    {
        printf_x((unsigned int)(*str), n);
        str++;
    }
    return (*n);
}

int printf_p(void *p, int *n) 
{
    unsigned long addr = (unsigned long)p;
    *n += ft_putstr("0x", n);
    if (addr == 0) {
        *n += ft_putchar('0');
    } else {
        printf_x((unsigned int)addr, n);
    }
    return (*n);
}
