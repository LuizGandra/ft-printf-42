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

int	ft_puthex(unsigned int n, const char type, const char flag)
{
	int		bytes;
	char	*prefix;
	char	*hex_values;

	bytes = 0;
	if (type == 'x')
	{
		prefix = "0x";
		hex_values = HEX_LOWERCASE_VALUES;
	}
	else
	{
		prefix = "0X";
		hex_values = HEX_UPPERCASE_VALUES;
	}
	if (n && flag == '#')
		bytes += ft_putstr(prefix);
	write_hex(n, &bytes, hex_values);
	return (bytes);
}
