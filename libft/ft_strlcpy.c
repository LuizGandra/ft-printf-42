/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:09:35 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/14 13:42:19 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
int	main(void)
{
	char	dst[20] = "--------------------";
	printf("ft_strlcpy(\"--------------------\", \"strlcpy example\", 20)\n");
	printf("	retorna %zu\n", ft_strlcpy(dst, "strlcpy example", 20));
	printf("	dst = \"%s\"\n", dst);
	printf("\n\n");
	char	dst2[8] = "--------";
	printf("ft_strlcpy(\"--------\", \"testing strlcpy again\", 8)\n");
	printf("	retorna %zu\n", ft_strlcpy(dst2, "testing strlcpy again", 8));
	printf("	dst = \"%s\"\n", dst2);
	printf("\n\n");
	char	dst3[] = "";
	printf("ft_strlcpy(\"\", \"empty dest test\", 0)\n");
	printf("	retorna %zu\n", ft_strlcpy(dst3, "empty dest test", 0));
	printf("	dst = \"%s\"\n", dst3);
	return (0);
}
*/
