/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 21:37:31 by hetha             #+#    #+#             */
/*   Updated: 2020/05/13 01:42:50 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ar1;
	unsigned char	*ar2;
	size_t			i;

	i = 0;
	ar1 = (unsigned char *)s1;
	ar2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (ar1[i] != ar2[i])
			return ((ar1[i] - ar2[i]));
		i++;
	}
	return (0);
}
