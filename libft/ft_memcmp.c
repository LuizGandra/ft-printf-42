/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:16:08 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/21 16:19:38 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t			i;

	if (!n)
		return (0);
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	i = 0;
	while (temp_s1[i] == temp_s2[i] && i < (n - 1))
		i++;
	return (temp_s1[i] - temp_s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	int	mem_1[] = {0, 1, 2, 3, 4};
	int	mem_2[] = {0, 1, 2, 3, 5};
	int	mem_3[] = {0, 1, 0, 3, 4};

	printf("Compare [0, 1, 2, 3, 4] and [0, 1, 2, 3, 5] with n = 5"
		" returns %i\n", ft_memcmp(mem_1, mem_2, 5 * sizeof(int)));
	printf("Compare [0, 1, 2, 3, 4] and [0, 1, 2, 3, 5] with n = 4"
                " returns %i\n", ft_memcmp(mem_1, mem_2, 4 * sizeof(int)));
	printf("Compare [0, 1, 2, 3, 4] and [0, 1, 0, 3, 4] with n = 3"
		" returns %i\n", ft_memcmp(mem_1, mem_3, 3 * sizeof(int)));
	return (0);
}
*/
