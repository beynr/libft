/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:14:33 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 18:58:20 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		if (s2[i] == (unsigned char)c)
		{
			return ((void *)(s2 + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char a[]= "noura bnh";
	char *b = (char *)memchr(a,'a',3);
	if(b)
	{
		printf("%s\n", b);
	}
	else
	printf("not exist");
}
*/
