/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:11:48 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/10 18:03:09 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += ('a' - 'A');
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("c retorna %c\n", ft_tolower('c')); // c
        printf("H retorna %c\n", ft_tolower('H')); // h
        printf("4 retorna %c\n", ft_tolower('4')); // 4
        printf("_ retorna %c\n", ft_tolower('_')); // _
        printf("59872 retorna %c\n", ft_tolower(59872)); // indefinido
        printf("-65 retorna %c\n", ft_tolower(-65)); // indefinido
        return (0);
}
*/
