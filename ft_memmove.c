/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:53:58 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/11 12:06:19 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}

/*
int main()
{
    char str[] = "Hello, world!    ";
    ft_memmove(str + 7, str, 9);
    printf("Result after memmove: %s\n", str+7);
    return 0;
}
*/