/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:27:29 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 23:29:28 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

static int	ft_putnbr_base_fd(int n, int i, int fd, char x)
{
	char	digit;

    unsigned int nb = (unsigned int)n;
	if (nb >= 16)
	{
		i = ft_putnbr_base_fd(nb / 16, i + 1, fd, x);
	}
	if (nb % 16 >= 10)
    {
        if(x == 'x')
		    digit = nb % 16 + 87;
        else 
            digit = nb % 16 + 55;
    }
	else
		digit = nb % 16 + 48;
	write(fd, &digit, 1);
	return (i);
}

int ft_print_hex(int nb,char x)
{
	int i;

	i = 0;
	i += ft_putnbr_base_fd(nb,1,1,x);
	return (i);
}

// int main()
// {
// 	//char *i = "txt";
// 	int j = -1000;
// 	//printf("%p\n",i);
// 	printf("%X\n",j);
// 	//ft_print_hex(i);
// 	j = ft_print_hex(-1000,'x');
// 	print_char(10);
//     print_int(j);
// 	return(0);
// }