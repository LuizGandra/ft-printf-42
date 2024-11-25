/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:59:41 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/25 16:48:26 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	resolve_format_code(const char code, va_list list);

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		printed_bytes;
	int		i;

	va_start(list, str);
	i = 0;
	printed_bytes = 0;
	while (str[i])
	{
		if (str[i] == '%')
			printed_bytes += resolve_format_code(str[++i], list);
		else
			printed_bytes += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (printed_bytes);
}

int	resolve_format_code(const char code, va_list list)
{
	if (code == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (code == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (code == 'p')
		return (ft_putaddress(va_arg(list, void *)));
	if (code == 'd' || code == 'i')
		return (ft_putnbr(va_arg(list, int)));
	if (code == 'u')
		return (ft_putnbr_unsigned(va_arg(list, unsigned int)));
	if (code == 'x' || code == 'X')
		return (ft_puthex(va_arg(list, unsigned int), code));
	if (code == '%')
		return (ft_putchar(code));
	return (0);
}
