/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:12:30 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/09 23:17:33 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	j = 0;
	lensrc = ft_strlen(src);
	if (!dst && size == 0)
		return (lensrc);
	lendest = ft_strlen((const char *)dst);
	if (size <= lendest)
		return (size + lensrc);
	while (dst[i])
		i++;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lendest + lensrc);
}
/*
int main()
{
    char dst[] = "Hello, ";
    const char *src = "world!";

    size_t result = ft_strlcat(dst, src, 9);

    printf("Concatenated string: %s\n", dst);
    printf("Total length after concatenation: %zu\n", result);

    return 0;
}*/