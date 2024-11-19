/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:58:50 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/10 11:39:50 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	n = n % 10 + '0';
	ft_putchar_fd (n, fd);
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
    ft_putnbr_fd(65, fd); 
    fclose(fp);
    return 0;
}*/
