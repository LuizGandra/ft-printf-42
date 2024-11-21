/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:13:40 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/11 12:52:53 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("c retorna %i\n", ft_isalnum('c')); // 1
        printf("9 retorna %i\n", ft_isalnum('9')); // 1
        printf("4 retorna %i\n", ft_isalnum('4')); // 1
        printf("_ retorna %i\n", ft_isalnum('_')); // 0
        printf("Y retorna %i\n", ft_isalnum('Y')); // 1
        return (0);
}
*/
