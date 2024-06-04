/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syuto <syuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:19:30 by syuto             #+#    #+#             */
/*   Updated: 2024/06/01 16:21:41 by syuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	if (!s)
		return ;
	n = ft_strlen(s);
	write(fd, s, n);
}
