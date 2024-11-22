/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:53:35 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/22 13:30:38 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_hex(unsigned long long n, int fd, char *hex_values)
{
	if (n >= 16)
		write_hex(n / 16, 0, hex_values);
	ft_putchar_fd(hex_values[n % 16], fd);
}