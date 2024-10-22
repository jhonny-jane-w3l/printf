/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltohex_64.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:10:04 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 08:45:08 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_ltohex_64(void *nb, char x)
{
	t_list	*lst;
	int		i;
	char	*binary;
	char	c;

	lst = ft_table_lst(x);
	binary = ft_ltobi_64(nb);
	i = 0;
	// if (nb == INT_MIN)
	// {
	// 	ft_putstr_fd("80000000", 1);
	// 	return (8);
	// }
	while (*binary)
	{
		c = ft_lst_find_value(lst, ft_substr(binary, 0, 4));
		if (c != '0')
		{
			i++;
			ft_putchar_fd(c, 1);
		}
		binary += 4;
	}
	return (i);
}

// int	main(void)
// {
// 	//long n = (long)(void *)-1500;
// 	ft_ltohex_64((void *)1500,'x');
	
// 	printf("\nvoici : %p\n", (void *)1500);
// 	return (0);
// }
