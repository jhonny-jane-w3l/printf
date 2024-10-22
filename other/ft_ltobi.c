/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltobi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:21:51 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/21 23:22:07 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

static void	ft_add_neg_byte(char *buffer)
{
	int	len;
	int	i;
	int	is_zero;

	len = ft_strlen(buffer) - 1;
	i = len;
	is_zero = 0;
	while (i > 0 && is_zero < 1)
	{
		if (buffer[i] == '0')
		{
			buffer[i] = '1';
			is_zero++;
		}
		else
			buffer[i] = '0';
		i--;
	}
}

static void	ft_complement_two(char *buffer)
{
	int i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '0')
			buffer[i] = '1';
		else
			buffer[i] = '0';
		i++;
	}
	ft_add_neg_byte(buffer);
}

static void	process_itobi(int nb, char *buff)
{
	int	i;
	int	mod;
	int	is_neg;

	is_neg = 0;
	i = 31;
	mod = 0;
	if (nb < 0)
	{
		nb = -nb;
		is_neg++;
	}
	buff[32] = '\0';
	while (i >= 0)
	{
		mod = nb % 2;
		buff[i] = mod + '0';
		nb = nb / 2;
		i--;
	}
	while (((ft_strlen(buff) - 1) - i) % 4 != 0)
		i--;
	if (is_neg)
		ft_complement_two(buff);
}

char	*ft_ltobi(int n)
{
	char	*buffer;

	buffer = malloc(33 * sizeof(char));
	if (!buffer)
		return (NULL);
	process_itobi(n, buffer);
	return (buffer);
}

// int	main(void)
// {
// 	ft_itobi(INT_MAX);
// 	ft_itobi(INT_MIN+1);
// 	printf("%x\n",  INT_MAX);
// 	return (0);
// }
// 00000000000000000000 0011 1110 1000
// 11111111111111111111 1100 0001 0111