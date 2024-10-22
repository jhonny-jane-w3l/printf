/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:25:27 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 15:56:46 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_putnbr_uns_fd(unsigned int n, int i, int fd)
{
	char	digit;

	if (n >= 9)
		i = ft_putnbr_uns_fd(n / 10, i + 1, fd);
	digit = n % 10 + 48;
	write(fd, &digit, 1);
	return (i);
}

// int main ()
// {
// 	int j = printf("%u",-10000000);
// 	int i = ft_putnbr_uns_fd(-10000000,1,1);
// 	assert(i == j);
// 	//int j = ft_putnbr_fd(-100000,1,1);
// 	return (0);
// }