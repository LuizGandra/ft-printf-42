/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:06:12 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/22 13:30:54 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower_fd(unsigned int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	write_hex(n, fd, HEX_LOWERCASE_VALUES);
	// TODO implement return logic
	return (0);
}

int	ft_puthex_upper_fd(unsigned int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	write_hex(n, fd, HEX_UPPERCASE_VALUES);
	// TODO implement return logic
	return (0);
}

