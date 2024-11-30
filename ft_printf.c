/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:59:41 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/30 13:54:07 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	resolve_type(const char type, va_list list);

int	ft_printf(const char *format_str, ...)
{
	va_list	list;
	int		printed_bytes;
	int		i;

	if (!format_str)
		return (-1);
	va_start(list, format_str);
	i = 0;
	printed_bytes = 0;
	while (format_str[i])
	{
		if (format_str[i] == '%')
			printed_bytes += resolve_type(format_str[++i], list);
		else
			printed_bytes += ft_putchar(format_str[i]);
		i++;
	}
	va_end(list);
	return (printed_bytes);
}

int	resolve_type(const char type, va_list list)
{
	if (type == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (type == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (type == 'p')
		return (ft_putaddress(va_arg(list, void *)));
	if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(list, int)));
	if (type == 'u')
		return (ft_putnbr_unsigned(va_arg(list, unsigned int)));
	if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(list, unsigned int), type));
	if (type == '%')
		return (ft_putchar(type));
	return (0);
}
