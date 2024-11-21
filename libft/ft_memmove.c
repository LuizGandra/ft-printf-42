/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:15:55 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/26 11:44:29 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_d;
	unsigned char	*temp_s;

	temp_d = (unsigned char *)dest;
	temp_s = (unsigned char *)src;
	if (temp_s < temp_d && temp_s + (n - 1) >= temp_d)
	{
		while (n--)
			temp_d[n] = temp_s[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "xxxxxxxxum dolor sit a";
	char	src[] = "lorem ip";

	printf("Source: %s\n", src);
	printf("Dest before memove: %s\n", dest);
	ft_memmove(dest, src, 8);
	printf("Dest after memmove: %s\n", dest);
	return (0);
}
*/
