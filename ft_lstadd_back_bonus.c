/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:42:02 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 15:03:39 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	list = *lst;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		while (list -> next != NULL)
		{
			list = list -> next;
		}
		list -> next = new;
	}
}
/*
int main() {
    t_list *head = NULL;
    int x = 42;
	t_list *n;
    ft_lstadd_back(&head, ft_lstnew(&x));
    int y = 5;
    ft_lstadd_back(&head, ft_lstnew(&y));
    
	 int k = 9;
    ft_lstadd_back(&head, ft_lstnew(&k));
	n = ft_lstlast(head);
    printf("%d",*(int *)n->cont);
}*/
