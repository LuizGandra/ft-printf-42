/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:18:41 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/29 15:06:49 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*node;

	lst = ft_lstnew("ft_lstsize example 1");
	node = ft_lstnew("ft_lstsize example 2");
	ft_lstadd_front(&lst, node);
	printf("List len: %i\n", ft_lstsize(lst));
	return (0);
}
*/
