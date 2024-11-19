/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:04:58 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/10/31 17:17:19 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void f(unsigned int i, char *c)
{
	if (i%2 == 0)
	{
		printf("%c", *c);
	}
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
/*
int main()
{
    char str[] = "Hello, world!";
    ft_striteri(str, f);
    return 0;
}
*/