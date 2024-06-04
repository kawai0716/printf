/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:50:39 by syuto             #+#    #+#             */
/*   Updated: 2024/06/01 12:02:50 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar(char c) 
{
    return write(1, &c, 1);
}

int ft_putstr(char *str, int *n) 
{
    while (*str) 
        *n += ft_putchar_fd(*str++);
    return (*n);
}
