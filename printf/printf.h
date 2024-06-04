/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:09:43 by syuto             #+#    #+#             */
/*   Updated: 2024/05/17 15:53:52 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H


# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>


void printf(const char *format, ...);
void printf_c(char c);
void ft_printf_d(int i);
int ft_printf_i(int i);
void *printf_p(void *c);
void printf_s(char *c);
unsigned int printf_u(unsigned int i);
char printf_x(int i);

#endif