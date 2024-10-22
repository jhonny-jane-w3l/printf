/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:10:32 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 06:11:23 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBPRINTF_H
#define LIBPRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <stdarg.h>
#include <assert.h>

# define CHAR 99
# define STR 115
# define PTR 112
# define HEX_L 120
# define HEX_U 88

typedef struct s_hex_table
{
	char *binary_block;
	char value;
	
} t_hex_table;


void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char    *ft_itobi_32(int n);
char	*ft_ltobi_64(void *nb);
size_t	ft_strlen(const char *s);
int	    ft_isset(char c, char const *set);
char	ft_lst_find_value(t_list *table, char *key);
t_list	*ft_table_lst(char x);
int		ft_itohex_32(int nb, char c);
int		ft_itohex_64(void *nb, char x);
int		ft_ltohex_64(void *nb, char x);


#endif