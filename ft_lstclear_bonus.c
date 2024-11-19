/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:05:07 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 10:27:24 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	del(void *content)
{
	free(content);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
	{
		return ;
	}
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*
int main()
{
 	int *a = malloc(sizeof(int));
    *a = 12;
    t_list *node1 = ft_lstnew(a);

    int *b = malloc(sizeof(int));
    *b = 24;
    t_list *node2 = ft_lstnew(b);
    node1->next = node2;

    int *c = malloc(sizeof(int));
    *c = 36;
    t_list *node3 = ft_lstnew(c);
    node2->next = node3;

    ft_lstclear(&node1, del);

}*/
