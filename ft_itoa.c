/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:19:45 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/10 11:18:58 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calcu(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	fct(long *num, char *str)
{
	str[0] = '-';
	*num = -(*num);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	num = n;
	i = calcu(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		fct(&num, str);
	}
	while (num > 0)
	{
		str[--i] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/*
int main()
{
	char *s;
    int n = -2147483646;
    s = ft_itoa(n);
    if (!s)
        printf ("NULL");
    printf ("%s", s);
}
*/