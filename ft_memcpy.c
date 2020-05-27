/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 20:25:03 by hetha             #+#    #+#             */
/*   Updated: 2020/05/12 21:59:59 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*array1;
	unsigned char	*array2;

	array1 = (unsigned char *)dest;
	array2 = (unsigned char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*array1++ = *array2++;
	return ((void *)dest);
}
