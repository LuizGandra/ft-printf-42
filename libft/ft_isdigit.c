/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:14:09 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/11 12:52:31 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>
int	main(void)
{
	printf("2 retorna %i\n", ft_isdigit('2')); // 1
	printf("- retorna %i\n", ft_isdigit('-')); // 0
	printf("7 retorna %i\n", ft_isdigit('7')); // 1
	printf("a retorna %i\n", ft_isdigit('a')); // 0
	printf("Y retorna %i\n", ft_isdigit('Y')); // 0
	return (0);
}
*/
