/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:41:00 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 10:31:05 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*b;

	b = (t_list *)malloc(sizeof(t_list));
	if (!b)
		return (NULL);
	b -> content = content;
	b -> next = NULL;
	return (b);
}
/*
int main()
{
    t_list *a;
    int cnt = 5;
    a = ft_lstnew(&cnt);
    printf("%d",*(int *)a->cont);
}*/
