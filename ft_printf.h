/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:59:45 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/22 13:42:37 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOWERCASE_VALUES "0123456789abcdef"
# define HEX_UPPERCASE_VALUES "0123456789ABCDEF"

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h> // REMOVE

int		ft_putaddress_fd(void *address, int fd);
int		ft_puthex_lower_fd(unsigned int n, int fd);
int		ft_puthex_upper_fd(unsigned int n, int fd);
void	write_hex(unsigned long long n, int fd, char *hex_values);
int	ft_printf(const char *str, ...);

#endif