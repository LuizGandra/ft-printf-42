/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:53:46 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/22 13:35:34 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress_fd(void *address, int fd)
{
	if (!address)
		ft_putstr_fd("(nil)", fd);
	else
	{
		ft_putstr_fd("0x", fd);
		write_hex((unsigned long long)address, fd, HEX_LOWERCASE_VALUES);
	}
	// TODO implement return logic
	return (0);
}