/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:04:24 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:23:47 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strchr("ABC", 'B')); // BC
	printf("%s\n", ft_strchr("ABC", 'Z')); // (null)
	printf("%s\n", ft_strchr("ABC", 'a')); // (null)
	printf("%s\n", ft_strchr("ABCABC", 'C')); // CABC
	printf("%s\n", ft_strchr("", '\0')); // \0
        printf("%s\n", ft_strchr("test", '\0')); // \0
        printf("%s\n", ft_strchr("\0", '\0')); // \0
	return (0);
}
*/
