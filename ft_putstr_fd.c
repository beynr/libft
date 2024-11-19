/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:37:26 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/10 11:31:45 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		return ;
	}
	if (fd < 0)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int main()
{
	  FILE *fp;
    int fd;

    fp = fopen("aaest.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fd = fileno(fp); // Convert FILE* to int file descriptor
    ft_putstr_fd("ppppp", fd); 
    fclose(fp);
    return 0;
}*/
