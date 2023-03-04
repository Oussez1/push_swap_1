/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouya <obouya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:33:52 by obouya            #+#    #+#             */
/*   Updated: 2023/03/04 18:02:20 by obouya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final_list;

	final_list = *lst;
	new->next = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (final_list->next != NULL)
	{
		final_list = final_list->next;
	}
	final_list->next = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*b;

	b = (t_list *)malloc(sizeof(t_list));
	if (b == 0)
		return (NULL);
	b->content = content;
	b->next = NULL;
	return (b);
}
