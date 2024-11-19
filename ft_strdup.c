/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:34:43 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/10/31 16:25:52 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
	{
		return (NULL);
	}
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
    const char *original = "Hello, world!";
    char *res = ft_strdup(original);

    if (res)
    {
        printf("Original: %s\n", original);
        printf("res: %s\n", res);
        free(res);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
*/