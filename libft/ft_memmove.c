/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 21:35:31 by hetha             #+#    #+#             */
/*   Updated: 2020/05/12 22:06:08 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dst <= sr || dst >= (sr + n))
	{
		while (n--)
			*dst++ = *sr++;
	}
	else
	{
		dst += n - 1;
		sr += n - 1;
		while (n--)
			*dst-- = *sr--;
	}
	return (dest);
}
