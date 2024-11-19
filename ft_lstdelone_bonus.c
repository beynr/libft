/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:42:42 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 10:27:32 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main() {
	 int *a = malloc(sizeof(int));
    *a = 12;
    t_list *node = ft_lstnew(a); 

    printf("Content address before deletion: %d\n", *(int *)node->cont);

    // Delete the node using ft_lstdelone
    ft_lstdelone(node, del);

    // After deletion, the memory has been freed
    // printf is invalid after free

    return 0;
}
*/
