/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouya <obouya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:46:31 by obouya            #+#    #+#             */
/*   Updated: 2023/03/04 23:42:04 by obouya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	sa(t_list **stack_a, int a);
void	sb(t_list **stack_b, int b);
void	ss(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int r_a);
void	rb(t_list **stack_b, int r_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, int r_a);
void	rrb(t_list **stack_b, int r_b);
void	rrr(t_list **stack_a, t_list **stack_b);


#endif