/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:53:46 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/26 18:02:51 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(void *address)
{
	int	bytes;

	if (!address)
		return (ft_putstr("(nil)"));
	bytes = ft_putstr("0x");
	write_hex((unsigned long long)address, &bytes, HEX_LOWERCASE_VALUES);
	return (bytes);
}