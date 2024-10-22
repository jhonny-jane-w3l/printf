/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex_32.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:10:04 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 21:40:53 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_itohex_32(int nb, char x)
{
	t_list	*lst;
	int		i;
	char	*binary;
	char	c;

	lst = ft_table_lst(x);
	binary = ft_itobi_32(nb);
	i = 0;
	if (nb == INT_MIN)
	{
		ft_putstr_fd("80000000", 1);
		return (8);
	}
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
	free(binary);
	return (i);
}

// int main()
// {
// 	//char *i = "txt";
// 	int j = -1000;
// 	//printf("%p\n",i);
// 	printf("%X\n",j);
// 	//ft_print_hex(i);
// 	print_char(10);
// 	ft_itohex_32(j,'x');
// 	return(0);
// }
