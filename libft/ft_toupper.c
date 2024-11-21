/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:11:52 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/11 11:17:37 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("c retorna %c\n", ft_toupper('C')); // C
        printf("H retorna %c\n", ft_toupper('H')); // H
        printf("4 retorna %c\n", ft_toupper('4')); // 4
        printf("_ retorna %c\n", ft_toupper('_')); // _
        printf("59872 retorna %c\n", ft_toupper(59872)); // indefinido
        printf("-65 retorna %c\n", ft_toupper(-65)); // indefinido
	return (0);
}
*/
