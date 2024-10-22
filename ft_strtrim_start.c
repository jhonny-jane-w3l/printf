/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_start.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 04:16:29 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 22:40:40 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

char	*ft_strtrim_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (set == NULL || s1 == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_isset(s1[i], set) == 1)
		i++;
	while (i % 4 != 0)
		i--;
	if (i + 1 == j)
		return (ft_strdup(""));
	ptr = malloc(sizeof(char) * (j - i) + 2);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s1[i], (j - i) + 2);
	return (ptr);
}
