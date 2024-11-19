/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:32:38 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/02 16:57:51 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
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
    ft_putchar_fd('n', fd); 
    fclose(fp);
    return 0;
}*/