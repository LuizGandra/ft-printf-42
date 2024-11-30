/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:49 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/27 19:07:33 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnbr(int n, const char flag)
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
	else if (flag == '+' || flag == ' ')
		bytes += ft_putchar(flag);
	write_number(long_n, &bytes);
	return (bytes);
}

int	ft_putnbr_unsigned(unsigned int n, const char flag)
{
	int	bytes;

	bytes = 0;
	if (flag == '+' || flag == ' ')
		bytes += ft_putchar(flag);
	write_number(n, &bytes);
	return (bytes);
}
