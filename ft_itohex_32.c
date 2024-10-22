/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex_32.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:10:04 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 23:15:39 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_itohex_32(int nb, char x)
{
	t_list	*lst;
	int		i;
	char	c;
	char	*binary;

	lst = ft_table_lst(x);
	binary = ft_strtrim_start(ft_itobi_32(nb),"0") ;
	i = 0;
	if (nb == INT_MIN)
		return (ft_putstr_fd("80000000", 1));
	if (nb == 0)
		return (ft_putstr_fd("0", 1));
	while (*binary)
	{
		c = ft_lst_find_value(lst, ft_substr(binary, 0, 4));
		if (c)
		{
			i++;
			ft_putchar_fd(c, 1);
		}
		binary += 4;
	}
	ft_lstclear(&lst,free);
	return (i);
}

// int	main(void)
// {

// 	print_int(ft_itohex_32(16,'x'));
// 	print_int(printf("\n%x\n", 16));
// 	return(0);
// }