/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:14:04 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/11 12:52:18 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("c retorna %i\n", ft_isascii('c')); // 1
	printf("H retorna %i\n", ft_isascii('H')); // 1
	printf("4 retorna %i\n", ft_isascii('4')); // 1
	printf("_ retorna %i\n", ft_isascii('_')); // 1
	printf("59872 retorna %i\n", ft_isascii(59872)); // 0
	printf("-65 retorna %i\n", ft_isascii(-65)); // 0
	printf("65 retorna %i\n", ft_isascii(65)); // 1
	return (0);
}
*/
