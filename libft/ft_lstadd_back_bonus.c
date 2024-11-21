/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:19:02 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/29 14:26:42 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*
#include <stdio.h>
int     main(void)
{
	t_list  *lst;
	t_list  *node;
	t_list  *new;

	lst = ft_lstnew("node 1");
	node = ft_lstnew("node 2");
	new = ft_lstnew("ft_lstadd_back example");
	ft_lstadd_back(&lst, node);
	ft_lstadd_back(&lst, new);
	printf("First node Content: %s\n", (char *)lst->content);
	printf("First node Next: %p\n", lst->next);
	printf("\n");
	printf("Second node Content: %s\n", (char *)lst->next->content);
	printf("Second node Next: %p\n", lst->next->next);
	printf("\n");
	printf("Last node Content: %s\n", (char *)lst->next->next->content);
	printf("Last node Next: %p\n", lst->next->next->next);
	return (0);
}
*/
