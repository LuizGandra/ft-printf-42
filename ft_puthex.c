/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:06:12 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/25 16:48:47 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, const char code)
{
	int	bytes;

	bytes = 0;
	if (code == 'x')
		write_hex(n, &bytes, HEX_LOWERCASE_VALUES);
	else
		write_hex(n, &bytes, HEX_UPPERCASE_VALUES);
	return (bytes);
}
