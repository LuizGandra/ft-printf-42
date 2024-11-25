/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:49 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/25 16:00:02 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long long	long_n;
	int			bytes;

	long_n = n;
	bytes = 0;
	if (long_n < 0)
	{
		long_n = -long_n;
		bytes += ft_putchar('-');
	}
	write_number(long_n, &bytes);
	return (bytes);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	bytes;

	bytes = 0;
	write_number(n, &bytes);
	return (bytes);
}
