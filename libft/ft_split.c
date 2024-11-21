/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:01 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/01 18:24:32 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*clean_mem(char **mem)
{
	char	**temp;

	temp = mem;
	while (*temp)
		free(*temp++);
	free(mem);
	return (NULL);
}

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**split_str(char **arr, char const *s, char c)
{
	char	*temp;
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			temp = ft_strchr(s, c);
			if (temp)
				len = temp - s;
			else
				len = ft_strlen(s);
			temp = ft_substr(s, 0, len);
			if (!temp)
				return (clean_mem(arr));
			arr[i++] = temp;
			s += len;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	return (split_str(arr, s, c));
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	char	**splitted_str;
	int	i;

	str = "lorem ipsum dolor sit amet,
		consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor,
		dignissim sit amet, adipiscing nec, ultricies sed,
		dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a,
		semper congue, euismod non, mi.";
	i = 0;
	splitted_str = ft_split(str, ' ');
	if (!splitted_str)
		return (1);
	while (splitted_str[i])
		printf("%s\n", splitted_str[i++]);
	clean_mem(splitted_str);
	return (0);
}
*/
