/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:59:41 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/22 16:10:49 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	resolve_format_code(const char code, va_list list);

int	ft_printf(const char *str, ...)
{
	va_list list;
	int			i;

	va_start(list, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			resolve_format_code(str[++i], list);
		else
			ft_putchar_fd(str[i], 0);
		i++;
	}
	va_end(list);
	// TODO implement return logic
	return (0);
}

void	resolve_format_code(const char code, va_list list)
{
	if (code == 'c')
		ft_putchar_fd(va_arg(list, int), 0);
	else if (code == 's')
		ft_putstr_fd(va_arg(list, char *), 0);
	else if (code == 'p')
		ft_putaddress_fd(va_arg(list, void *), 0);
	else if (code == 'd')
		ft_putnbr_fd(va_arg(list, int), 0);
	else if (code == 'i')
		ft_putnbr_fd(va_arg(list, int), 0);
	else if (code == 'u')
		ft_putnbr_fd(va_arg(list, unsigned int), 0);
	else if (code == 'x')
		ft_puthex_lower_fd(va_arg(list, unsigned int), 0);
	else if (code == 'X')
		ft_puthex_upper_fd(va_arg(list, unsigned int), 0);
	else if (code == '%')
		ft_putchar_fd(code, 0);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'X';
// 	// string and char
// 	ft_printf("%s %c e %c, %%\n", "Pokémon", c, 'Y');
// 	printf("%s %c e %c, %%\n", "Pokémon", c, 'Y');

// 	ft_printf("%%s: %s\n", NULL);
// 	// printf("%%s: %s\n", NULL); // ERROR

// 	// hexadecimal
// 	ft_printf("%%x: %x e %%X: %X\n", c, c);
// 	printf("%%x: %x e %%X: %X\n", c, c);

// 	// address
// 	ft_printf("%%p: %p\n", &c);
// 	printf("%%p: %p\n", &c);

// 	ft_printf("%%p: %p\n", NULL);
// 	printf("%%p: %p\n", NULL);

// 	// numbers
// 	ft_printf("%%i: %i\n",-2576);
// 	printf("%%i: %i\n",-2576);
// 	ft_printf("%%u: %u\n", 455489);
// 	printf("%%u: %u\n", 455489);
// 	ft_printf("%%d: %d\n", 0);
// 	printf("%%d: %d\n", 0);
// }