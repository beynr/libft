/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:58:04 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/10 09:53:57 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j != i && ft_strchr(set, s1[j - 1]))
		j--;
	res = malloc(j - i + 1);
	if (!res)
		return (NULL);
	while (i < j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
/*
int main()
{
	printf("%s",ft_strtrim("nhoaura","bnah"));
}
*/