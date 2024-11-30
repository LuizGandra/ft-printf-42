/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:59:41 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/27 18:59:07 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	resolve_specifier(const char code, const char flag, va_list list);

int	ft_printf(const char *format_str, ...)
{
	va_list	list;
	int		printed_bytes;
	int		i;

	if (!format_str)
		return (-1);
	va_start(list, format_str);
	i = -1;
	printed_bytes = 0;
	while (format_str[++i])
	{
		if (format_str[i] == '%')
		{
			i++;
			while (format_str[i] == '#' || format_str[i] == ' '
				|| format_str[i] == '+')
				i++;
			printed_bytes += resolve_specifier(format_str[i],
					format_str[i - 1], list);
		}
		else
			printed_bytes += ft_putchar(format_str[i]);
	}
	va_end(list);
	return (printed_bytes);
}

static int	resolve_specifier(const char code, const char flag, va_list list)
{
	if (code == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (code == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (code == 'p')
		return (ft_putaddress(va_arg(list, void *)));
	if (code == 'd' || code == 'i')
		return (ft_putnbr(va_arg(list, int), flag));
	if (code == 'u')
		return (ft_putnbr_unsigned(va_arg(list, unsigned int), flag));
	if (code == 'x' || code == 'X')
		return (ft_puthex(va_arg(list, unsigned int), code, flag));
	if (code == '%')
		return (ft_putchar(code));
	return (0);
}
