/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:35:11 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 10:27:41 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void fct(int *a)
{
	*a = *a *2;
}*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
	{
		return ;
	}
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst -> next;
	}
}
/*
int main()
{
 int *a = malloc(sizeof(int));
    *a = 12;
    t_list *node = ft_lstnew(a);
	ft_lstiter(node, (void *)fct);
	 printf("Content value after iteration: %d\n", *a);
}
*/
