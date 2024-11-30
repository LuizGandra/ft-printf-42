/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:06:12 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/27 19:07:39 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_puthex(unsigned long long n, const char type, const char flag)
{
	int	bytes;

	bytes = 0;
	if (flag == '#')
	{
		if (type == 'x')
			bytes += ft_putstr("0x");
		if (type == 'X')
			bytes += ft_putstr("0X");
	}
	if (type == 'x')
		write_hex(n, &bytes, HEX_LOWERCASE_VALUES);
	else
		write_hex(n, &bytes, HEX_UPPERCASE_VALUES);
	return (bytes);
}
