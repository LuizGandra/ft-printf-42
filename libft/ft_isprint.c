/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:10:29 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/11 12:52:43 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*
#include <stdio.h>
int	main(void)
{
	printf("\\0 retorna %i\n", ft_isprint('\0')); // 0
        printf("\\n retorna %i\n", ft_isprint('\n')); // 0
        printf("4 retorna %i\n", ft_isprint('4')); // 1
        printf("\\t retorna %i\n", ft_isprint('\t')); // 0
        printf("59872 retorna %i\n", ft_isprint(59872)); // 0
        printf("-65 retorna %i\n", ft_isprint(-65)); // 0
        printf("@ retorna %i\n", ft_isprint('@')); // 1
	return (0);
}
*/
