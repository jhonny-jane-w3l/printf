/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:03:45 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/21 23:59:11 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

t_hex_table	*node_table(char *block, char k , char x)
{
	t_hex_table	*table;

	if (!block)
		return (NULL);
	table = malloc(1 * sizeof(t_hex_table));
	if (!table)
		return (NULL);
	table->binary_block = block;
	if (x == HEX_U)
		table->value = ft_toupper(k);
	else
		table->value = k;
	return (table);
}

t_list	*ft_table_lst(char x)
{
	t_list	*tbl_lst;

	tbl_lst = malloc(1 * sizeof(t_list *));
	if (!tbl_lst)
		return (NULL);
	tbl_lst = ft_lstnew(node_table("0000", '0',x));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("0001", '1',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("0010", '2',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("0011", '3',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("0100", '4',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("0101", '5',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("0110", '6',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("0111", '7',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1000", '8',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1001", '9',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1010", 'a',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1011", 'b',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1100", 'c',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1101", 'd',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1110", 'e',x)));
	ft_lstadd_back(&tbl_lst, ft_lstnew(node_table("1111", 'f',x)));
	return (tbl_lst);
}

char	ft_lst_find_value(t_list *table, char *key)
{
	char	*binarie_block;
	char	value;
	size_t	len_k;

	if (!table)
		return (0);
	len_k = ft_strlen(key);
	while (table)
	{
		binarie_block = ((t_hex_table *)(table->content))->binary_block;
		value = ((t_hex_table *)(table->content))->value;
		if (!ft_strncmp(key, binarie_block, len_k))
			return (value);
		table = table->next;
	}
	return (0);
}
// int main(void)
// {
// 	t_list *lst;
// 	lst = ft_table_lst();
// 	(void)lst;
// 	print_str(((t_hex_table *)(lst->content))->binary_block);
// 	char c = ft_lst_find_value(lst,"1010");
// 	char s = ft_lst_find_value(lst,"1111");
// 	print_char(c);
// 	print_char(s);
// }