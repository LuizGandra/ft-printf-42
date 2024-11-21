/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:09:31 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/14 13:42:38 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && i < (size - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	char    dst[50] = "--------------------";
	printf("ft_strlcat(\"--------------------\", \"strlcat example\", 50)\n");
	printf("        retorna %zu\n", ft_strlcat(dst, "strlcat example", 50));
	printf("        dst = \"%s\"\n", dst);
	printf("\n\n");
	char    dst2[20] = "--------";
	printf("ft_strlcat(\"--------\", \"testing strlcat again\", 20)\n");
	printf("        retorna %zu\n", ft_strlcat(dst2, "testing strlcat again", 20));
	printf("        dst = \"%s\"\n", dst2);
	printf("\n\n");
	char    dst3[] = "";
	printf("ft_strlcat(\"\", \"empty dest test\", 0)\n");
	printf("        retorna %zu\n", ft_strlcat(dst3, "empty dest test", 0));
	printf("        dst = \"%s\"\n", dst3);
	return (0);
}
*/
