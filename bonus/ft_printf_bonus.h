/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:59:45 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/27 18:57:25 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# define HEX_LOWERCASE_VALUES "0123456789abcdef"
# define HEX_UPPERCASE_VALUES "0123456789ABCDEF"
# define STDOUT 1

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putaddress(void *address);
int		ft_putnbr(int n, const char flag);
int		ft_putnbr_unsigned(unsigned int n, const char flag);
int		ft_puthex(unsigned int n, const char type, const char flag);

void	write_hex(unsigned long long n, int *bytes, char *hex_values);
void	write_number(long long n, int *bytes);
size_t	ft_strlen(const char *s);

#endif