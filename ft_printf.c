/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:41:52 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 08:39:13 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

void	ft_dispatch(char k, va_list temp)
{
	if (k == 'c')
		ft_putchar_fd(va_arg(temp, int),1);
	if (k == 's')
		ft_putstr_fd(va_arg(temp, char *),1);
	if (k == 'x')
		ft_itohex_32(va_arg(temp, int), 'x');
	if (k == 'X')
		ft_itohex_32(va_arg(temp, int), 'X');
	if (k == 'X')
		ft_itohex_32(va_arg(temp, int), 'X');
	if (k == 'p')
		ft_ltohex_64(va_arg(temp, void *), 'X');
	if (k == '%')
		ft_putchar_fd('%',1);
	va_end(temp);
}

int	ft_printf(const char *str, ...)
{
	va_list ap;
	va_list temp;

	va_start(ap, str);
	va_copy(temp,ap);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_isset(*str,"cspdiuxX%"))
				ft_dispatch(*str++, temp);
		}
		ft_putchar_fd(*str,1);
		str++;
	}
	va_end(ap);
	return (0);
}

// int main()
// {
// 	ft_printf("voici la string %%\n");
// 	printf("voici i: %p \n", (void *)-1000);
// 	return(0);
// }