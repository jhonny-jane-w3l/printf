/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:08:55 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 21:59:51 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_putnbr_base_fd(unsigned long nb, int i, int fd)
{
	char	digit;	
	if (nb >= 16)
	{
		i = ft_putnbr_base_fd(nb / 16, i + 1, fd);
	}
	if (nb % 16 >= 10)
		digit = nb % 16 + 87;
	else
		digit = nb % 16 + 48;
	write(fd, &digit, 1);
	return (i);
}

int ft_print_ptr(void *ptr)
{
	int i;

	i= 2;
	unsigned long n = (unsigned long)ptr;
	write(1,"0x",2);
	i += ft_putnbr_base_fd(n,1,1);
	return (i);
}

// int main()
// {
// 	char *i = "txt";
// 	int j = 1000;
// 	printf("%p\n",i);
// 	printf("%p\n",&j);
// 	ft_print_ptr(i);
// 	print_char(10);
// 	ft_print_ptr(&j);
// 	return(0);
// }