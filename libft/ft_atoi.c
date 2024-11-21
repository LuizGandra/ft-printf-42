/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:09:59 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/26 15:34:27 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		n *= 10;
		n += *nptr - '0';
		nptr++;
	}
	return (n * sign);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("\"457\" returns %i\n", ft_atoi("457")); // 457
	printf("\"-42\" returns %i\n", ft_atoi("-42")); // -42
	printf("\"0\" returns %i\n", ft_atoi("0")); // 0
	printf("\"+50\" returns %i\n", ft_atoi("+50")); // 50
	printf("\"++50\" returns %i\n", ft_atoi("++50")); // 0
	printf("\"--42\" returns %i\n", ft_atoi("--42")); // 0
	printf("\"-+42\" returns %i\n", ft_atoi("-+42")); // 0
	printf("\"a42\" returns %i\n", ft_atoi("a42")); // 0
	printf("\"       42\" returns %i\n",
			ft_atoi("       42")); // 42
	printf("\"-2147483648\" returns %i\n",
			ft_atoi("-2147483648")); // -2147483648
	printf("\"2147483647\" returns %i\n",
			ft_atoi("2147483647")); // 2147483647

	return (0);
}
*/
