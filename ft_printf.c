/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:41:52 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 00:48:53 by cw3l             ###   ########.fr       */
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
	if (k == '%')
		ft_putchar_fd('%',1);
	va_end(temp);
}

int	ft_printf(char *str, ...)
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

int main()
{
	ft_printf("voici la string %X\n", INT_MIN);
	printf("voici la string %X\n", INT_MIN);
	return(0);
}