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

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr;
	unsigned char *gtr;

	ptr = (unsigned char *)dest;
	gtr = (unsigned char *)src;
	while (n-- > 0)
		*ptr++ = *gtr++;
	return (dest);
}
