/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouya <obouya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:06:56 by obouya            #+#    #+#             */
/*   Updated: 2023/03/04 23:41:43 by obouya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a, int r_a)
{
	t_list *c1_stack_a;
	t_list *last;
	t_list *tmp;

	c1_stack_a = *stack_a;
	if (c1_stack_a == NULL || c1_stack_a->next == NULL)
		return;
	last = c1_stack_a;
	while (last->next != NULL)
		last = last->next;
	tmp = (*stack_a)->next;
	last->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = tmp;
	if (r_a == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int r_b)
{
	t_list *c1_stack_b;
	t_list *last;
	t_list *tmp;

	c1_stack_b = *stack_b;
	if (c1_stack_b == NULL || c1_stack_b->next == NULL)
		return;
	last = c1_stack_b;
	while (last->next != NULL)
		last = last->next;
	tmp = (*stack_b)->next;
	last->next = *stack_b;
	(*stack_b)->next = NULL;
	*stack_b = tmp;
	if (r_b == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}

void rra(t_list **stack_a, int r_a)
{
	t_list	*c1_stack_a;
	t_list	*before_last;

	c1_stack_a = *stack_a;
	if (c1_stack_a == NULL || c1_stack_a->next == NULL)
		return ;
	while (c1_stack_a->next != NULL)
	{
		before_last = c1_stack_a;
		c1_stack_a = c1_stack_a->next;
	}
	before_last->next = NULL;
	c1_stack_a->next = *stack_a;
	*stack_a = c1_stack_a;
	if(r_a == 1)
		write(1, "rra\n", 3);
}
void	rrb(t_list **stack_b, int r_b)
{
	t_list	*c1_stack_b;
	t_list	*before_last;

	c1_stack_b = *stack_b;
	if (c1_stack_b == NULL || c1_stack_b->next == NULL)
		return ;
	while (c1_stack_b->next != NULL)
	{
		before_last = c1_stack_b;
		c1_stack_b= c1_stack_b->next;
	}
	before_last->next = NULL;
	c1_stack_b->next = *stack_b;
	*stack_b = c1_stack_b;
	if(r_b == 1)
		write(1, "rra\n", 3);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rr\n", 3);
}