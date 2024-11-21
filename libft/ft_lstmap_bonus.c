/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:19:35 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/11/01 18:27:17 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (!node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

/*
static void	*lstmap_tester(void *content)
{
	char	*temp;

	temp = (char *)malloc(2);
	if (!temp)
		return (NULL);
	*temp = *(char *)content;
	*temp = ft_toupper(*temp);
	return (temp);
}

static void	lstmap_del_tester(void *content)
{
	ft_bzero(content, ft_strlen((char *)content));
}

#include <stdio.h>
int	main(void)
{
	t_list	*list;
	t_list	*node;
	t_list	*new_list;
	char    str_1[] = "a";
	char    str_2[] = "b";

	list = ft_lstnew(str_1);
	node = ft_lstnew(str_2);
	ft_lstadd_back(&list, node);
	new_list = ft_lstmap(list, lstmap_tester, lstmap_del_tester);
	printf("Content (old list): %s\n", (char *)list->content);
	printf("Next address (old list): %p\n\n", list->next);
	printf("Content (new list): %s\n", (char *)new_list->content);
	printf("Next address (new list): %p\n\n", new_list->next);
	printf("Content (old list): %s\n", (char *)list->next->content);
	printf("Next address (old list): %p\n\n", list->next->next);
	printf("Content (new list): %s\n", (char *)new_list->next->content);
	printf("Next address (new list): %p\n", new_list->next->next);
	return (0);
}
*/
