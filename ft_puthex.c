/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:06:12 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/30 13:31:31 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, const char type)
{
	int	bytes;

	bytes = 0;
	if (type == 'x')
		write_hex((unsigned long long)n, &bytes, HEX_LOWERCASE_VALUES);
	else
		write_hex((unsigned long long)n, &bytes, HEX_UPPERCASE_VALUES);
	return (bytes);
}
