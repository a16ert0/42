/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:25:47 by hetha             #+#    #+#             */
/*   Updated: 2020/05/12 21:58:57 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*array1;
	unsigned char	*array2;

	i = 0;
	if (!n)
		return (NULL);
	array1 = (unsigned char *)dest;
	array2 = (unsigned char *)src;
	while (i < n)
	{
		array1[i] = (unsigned char)array2[i];
		if (array1[i] == (unsigned char)c)
			return ((void *)dest + i + 1);
		i++;
	}
	return (NULL);
}
