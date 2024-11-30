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

int	resolve_specifier_bonus(const char type, const char flag, va_list list);

int	ft_printf(const char *format_str, ...)
{
	va_list	list;
	char	flag;
	int		printed_bytes;
	int		i;

	va_start(list, format_str);
	flag = '\0';
	i = 0;
	printed_bytes = 0;
	while (format_str[i])
	{
		if (format_str[i] == '%')
		{
			i++;
			while (format_str[i] == '#' || format_str[i] == ' '
				|| format_str[i] == '+')
				flag = format_str[i++];
			printed_bytes += resolve_specifier_bonus(format_str[i], flag, list);
		}
		else
			printed_bytes += ft_putchar(format_str[i]);
		i++;
	}
	va_end(list);
	return (printed_bytes);
}

int	resolve_specifier_bonus(const char type, const char flag, va_list list)
{
	if (type == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (type == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (type == 'p')
		return (ft_putaddress(va_arg(list, void *)));
	if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(list, int), flag));
	if (type == 'u')
		return (ft_putnbr_unsigned(va_arg(list, unsigned int), flag));
	if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(list, unsigned int), type, flag));
	if (type == '%')
		return (ft_putchar(type));
	return (0);
}

// int	main(void)
// {
// 	int n1 = 5;
// 	int n2 = 8;
// 	ft_printf("%+i, % i, %#x, %#X\n", n1, n2, n1, n2);
// }