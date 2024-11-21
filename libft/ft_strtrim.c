/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:16:56 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/26 12:05:48 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "   trim---strtrim example---trim     ";
	char	*set = "   trim---";
	printf("Before trim: %s\n", s1);
	printf("After trim: %s\n", ft_strtrim("", ""));
	return (0);
}
*/
