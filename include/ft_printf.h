/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:10:32 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 23:26:23 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>
# include <unistd.h>
# include <libc.h>
# include <ctype.h>
# include <string.h>


# define CHAR 99
# define STR 115
# define PTR 112
# define HEX_L 120
# define HEX_U 88
//777/////777///777////777//777//
// # define INT_MIN -2147483648
// # define INT_MAX 2147483647
// # define LONG_MIN -9223372036854775808
// # define LONG_MAX 9223372036854775807
// # define UINT_MAX = 4294967295


typedef struct s_hex_table
{
	char *binary_block;
	char value;
	
} t_hex_table;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list ;	

void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
int	    ft_isset(char c, char const *set);
char	ft_lst_find_value(t_list *table, char *key);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_table_lst(char x);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_putstr_fd(char *s, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_toupper(int c);
t_list	*ft_lstnew(void *content);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
t_list	*ft_lstlast(t_list *lst);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_putnbr_fd(int n, int i, int fd);
char	*ft_strchr(const char *s, int c);



char    *ft_itobi_32(int n);
char	*ft_itobi_64(void *nb);
int		ft_itohex_32(int nb, char c);
int		ft_ltohex_64(void *nb, char x);
int		ft_printf(const char *str, ...);
char	ft_lst_find_value(t_list *table, char *key);
int		ft_putnbr_uns_fd(unsigned int n, int i, int fd);
int 	ft_print_ptr(void *ptr);
int 	ft_print_hex(int nb,char x);
char	*ft_strtrim_start(char const *s1, char const *set);

# define print_str(msg) printf("%s\n",msg)
# define print_size(msg) printf("voici le int %zu\n",msg)
# define print_int(msg) printf("voici le int %i\n",msg)
# define print_ptr(msg) printf("voici le int %p\n",msg)
# define print_char(msg) printf("%c\n",msg)
# define print_float(msg) printf("voici le float %f\n",msg)
# define print_hex(msg) printf("voici le float %x\n",msg)

#endif