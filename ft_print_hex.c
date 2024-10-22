/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:27:29 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 19:42:54 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "include/ft_printf.h"

// static int	ft_putnbr_base_fd(int nb, int i, int fd)
// {
// 	char	digit;
// 	if (nb == INT_MIN)
// 	{
// 		write(fd, "-2147483648", 11);
// 		return (11);
// 	}
// 	if (nb < 0 && nb != INT_MIN)
// 	{
// 		write(fd, "-", 1);
// 		nb = -nb;
// 		i = i + 1;
// 	}	
// 	if (nb >= 16)
// 	{
// 		i = ft_putnbr_base_fd(nb / 16, i + 1, fd);
// 	}
// 	if (nb % 16 >= 10)
// 		digit = nb % 16 + 87;
// 	else
// 		digit = nb % 16 + 48;
// 	write(fd, &digit, 1);
// 	return (i);
// }

// int ft_print_hex(int nb)
// {
// 	int i;

// 	i = 2;
// 	//write(1,"0x",2);
// 	i += ft_putnbr_base_fd(nb,1,1);
// 	return (i);
// }

// int main()
// {
// 	//char *i = "txt";
// 	int j = -1000;
// 	//printf("%p\n",i);
// 	printf("%x\n",j);
// 	//ft_print_hex(i);
// 	print_char(10);
// 	ft_print_hex(j);
// 	return(0);
// }