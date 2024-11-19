/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:10:01 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/10 11:06:09 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j])
	{
		j++;
	}
	if (!dst || size == 0)
		return (j);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int main()
{
   char src[] = "mn pp";
   size_t s;
    char dest[]="";
  	s = ft_strlcpy(dest,src,3);
   printf("%s\n",dest);
   printf("%ld",s);
}*/
