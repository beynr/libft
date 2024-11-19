/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:15:35 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/10 11:07:34 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst ->next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
int main()
{
    t_list *head = NULL;
    t_list *n;
    int x = 42;
    
    ft_lstadd_front(&head, ft_lstnew(&x));
    int y = 5;
    ft_lstadd_front(&head, ft_lstnew(&y));
    int k = 5;
    ft_lstadd_front(&head, ft_lstnew(&k));
    
    n = ft_lstlast(head);
    printf("%d",*(int *)n->cont);
}*/
