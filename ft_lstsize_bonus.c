/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:00:15 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/07 12:09:25 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
/*
int main()
{
	t_list *head = NULL;
    int x = 42;
    
    ft_lstadd_front(&head, ft_lstnew(&x));
    int y = 5;
    ft_lstadd_front(&head, ft_lstnew(&y));
    int k = 5;
    ft_lstadd_front(&head, ft_lstnew(&k));
    
    x = ft_lstsize(head);
    printf("%d",x);
}*/
