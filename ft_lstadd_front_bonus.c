/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:26:05 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/08 18:11:13 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new ->next = *lst;
	*lst = new;
}
/*
int main()
{
    t_list *head = NULL;
    int x = 42;
    
    ft_lstadd_front(&head, ft_lstnew(&x));
    printf("%d\n", *(int *)head->cont);
    int y = 5;
    ft_lstadd_front(&head, ft_lstnew(&y));
    printf("%d %d\n", *(int *)head->cont, *(int *)head->next->cont); 
}*/
