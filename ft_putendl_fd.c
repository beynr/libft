/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:52:27 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/10 11:32:21 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
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
    ft_putendl_fd("noura", fd); 
    fclose(fp);
    return 0;
}*/
