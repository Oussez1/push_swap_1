/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouya <obouya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:10:50 by obouya            #+#    #+#             */
/*   Updated: 2023/03/04 23:39:43 by obouya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
	t_list	*a1;
	t_list	*a2;
	t_list	*a3;
	t_list	*a4;
	// t_list	*a5;
	// t_list	*a6;

	a1 = ft_lstnew(1);
	a2 = ft_lstnew(2);
	a3 = ft_lstnew(3);
	a4 = ft_lstnew(4);
	// a5 = ft_lstnew(5);
	// a6 = ft_lstnew(6);

	ft_lstadd_back(&a1,a2);
	ft_lstadd_back(&a1,a3);
	ft_lstadd_back(&a1,a4);
	// ft_lstadd_back(&a1,a5);
	// ft_lstadd_back(&a1,a6);





	t_list	*b1;
	t_list	*b2;
	t_list	*b3;
	t_list	*b4;

	b1 = ft_lstnew(11);
	b2 = ft_lstnew(12);
	b3 = ft_lstnew(13);
	b4 = ft_lstnew(14);

	ft_lstadd_back(&b1,b2);
	ft_lstadd_back(&b1,b3);
	ft_lstadd_back(&b1,b4);

	printf("\n---------------------------------------------------------------> Avant1\n");
	t_list *tst1;
	tst1 = a1;
	while (tst1)
	{
		printf("----> %d", tst1->content);
		tst1 = tst1->next;
	}

	printf("\n---------------------------------------------------------------> Avant2\n");
	t_list *tst2;
	tst2 = b1;
	while (tst2)
	{
		printf("----> %d", tst2->content);
		tst2 = tst2->next;
	}
	rr(&a1, &b1);
	printf("\n---------------------------------------------------------------> Apres1\n");
	tst1 = a1;
	while (tst1)
	{
		printf("----> %d", tst1->content);
		tst1 = tst1->next;
	}
	printf("\n---------------------------------------------------------------> Apres2\n");
	tst2 = b1;
	while (tst2)
	{
		printf("----> %d", tst2->content);
		tst2 = tst2->next;
	}
}