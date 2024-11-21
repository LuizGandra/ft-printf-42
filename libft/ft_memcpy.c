/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:15:29 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/21 16:37:00 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	int	mem_dest[12];
	int	mem_src[12] = {0, 0, 0};
	int	i;

	ft_memcpy(mem_dest, mem_src, 3 * sizeof(int));
	i = 0;
	while (i < 3)
		printf("%i\n", mem_dest[i++]);
	return (0);
}
*/
