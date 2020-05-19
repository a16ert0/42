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
	unsigned char *ptr;
	unsigned char *gtr;

	ptr = (unsigned char *)dest;
	gtr = (unsigned char *)src;
	while (n-- > 0)
	{
		*ptr++ = *gtr++;
		if (*gtr == c)
		{
			*ptr++ = *gtr++;
			break ;
		}
	}
	return (dest);
}
