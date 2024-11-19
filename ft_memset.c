/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:05:35 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 11:21:39 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main()
{
//    char ok[] = "cc cv";
//    char *dazai = (char *)ft_memset(ok,'0',2);
//     printf("%s\n",dazai);

	int arr[] = {0, 0, 0};
	
	ft_memset(&arr[0], -1, 4);
	ft_memset(&arr[0], -4, 2);
	ft_memset(&arr[0], 25, 1);
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    return 0;
}*/