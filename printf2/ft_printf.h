/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sykawai <sykawai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:09:43 by syuto             #+#    #+#             */
/*   Updated: 2024/06/11 20:31:53 by sykawai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_printf_di(int i, int *n);
int		ft_printf_p(void *c, int *n);
int		ft_printf_u(unsigned int i, int *n);
int		ft_printf_x(unsigned long int i, int *n);
int		ft_printf_x2(unsigned long int i, int *n);
int		ft_putchar(char c);
int		ft_putstr(char *str, int *n);

#endif