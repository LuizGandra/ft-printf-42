/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:19:27 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/29 15:01:54 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	lstiter_tester(void *content)
{
	char	*temp;

	temp = (char *)content;
	*temp = ft_toupper(*temp);
}

#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*node_2;
	t_list	*node_3;
	char    str_1[] = "a";
	char    str_2[] = "b";
	char    str_3[] = "c";

	printf("Antes: %s, %s e %s\n", str_1, str_2, str_3);
	lst = ft_lstnew(str_1);
	node_2 = ft_lstnew(str_2);
	ft_lstadd_back(&lst, node_2);
	node_3 = ft_lstnew(str_3);
	ft_lstadd_back(&lst, node_3);
	ft_lstiter(lst, lstiter_tester);
	printf("Depois: %s, %s e %s\n", str_1, str_2, str_3);
	return (0);
}
*/
