/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:41:52 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 21:42:27 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = (int)ft_strlen(str);
	va_start(ap, str);
	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len -= 2;
			if (ft_isset(*str, "cspdiuxX%"))
			{
				if (*str == 'c')
					i += ft_putchar_fd(va_arg(ap, int), 1);
				if (*str == 's')
				{
					print_int(i);
					i += ft_putstr_fd(va_arg(ap, char *), 1);
					print_int(i);
				}
				if (*str == 'x')
					i += ft_itohex_32(va_arg(ap, int),'x');
				if (*str == 'X')
					i += ft_itohex_32(va_arg(ap, int),'X');
				if (*str == 'i' || *str == 'd')
					i += ft_putnbr_fd(va_arg(ap, int), 1, 1);
				if (*str == 'p')
					i += ft_print_ptr(va_arg(ap, void *)); 
				if (*str == 'u')
					i += ft_putnbr_uns_fd(va_arg(ap, unsigned int), 1, 1);
				if (*str == '%')
					i += ft_putchar_fd('%', 1);
			}
			str++;
		}
		else{
			ft_putchar_fd(*str, 1);
			str++;
		}
	}
	va_end(ap);
	return (len + i);
}
