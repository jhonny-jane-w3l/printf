/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltobi_64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 05:53:42 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 07:45:16 by cw3l             ###   ########.fr       */
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

static void	process_ltobi_64(long nb, char *buff)
{
	int	i;
	int	mod;
	int	is_neg;

	is_neg = 0;
	i = 63;
	mod = 0;
	if (nb < 0)
	{
		nb = -nb;
		is_neg++;
	}
	buff[64] = '\0';
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

char	*ft_itobi_64(void *nb)
{
	char	*buffer;
	long 	n;

	n = (long)&nb;
	printf("%ld\n",n);
	buffer = malloc(65 * sizeof(char));
	if (!buffer)
		return (NULL);
	process_ltobi_64(n, buffer);
	print_str(buffer);
	return (buffer);
}

// int	main(void)
// {
// 	ft_itobi_64((void *)-1500);
// 	return (0);
// }
// 00000000000000000000 0011 1110 1000
// 11111111111111111111 1100 0001 0111