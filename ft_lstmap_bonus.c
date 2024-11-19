/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:24:10 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 10:27:49 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	delete(void *d)
{
	free(d);
}
*/
/*void	*add(void *content)
{
	char	*c;

	c = (char *)content;
	(*c)++;
	return (content);
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			if (content)
				del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
int main()
{
 	// int value = 42;
    // t_list *lst = malloc(sizeof(t_list));
    // lst->content = &value;
    // lst->next = NULL;

    // // Test ft_lstmap
    // t_list *new_lst = ft_lstmap(lst, add, delete);

    // // Print the new list
    // printf("%d\n", *(int *)new_lst->content);

    // // Clean up the lists
    // ft_lstclear(&lst, delete);
    // ft_lstclear(&new_lst, delete);

	
	t_list *list = NULL;
    t_list *mapped_list;
    char *value;

 
    value = malloc(sizeof(char));
    *value = 'a';
    ft_lstadd_back(&list, ft_lstnew(value));

    value = malloc(sizeof(char));
    *value = 'b';
    ft_lstadd_back(&list, ft_lstnew(value));

    value = malloc(sizeof(char));
    *value = 'c';
    ft_lstadd_back(&list, ft_lstnew(value));

    mapped_list = ft_lstmap(list, add, delete);

    t_list *temp = mapped_list;
    while (temp)
    {
        printf("%c ", *(char *)(temp->cont));
        temp = temp->next;
    }
}*/
