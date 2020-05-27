/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 20:06:50 by hetha             #+#    #+#             */
/*   Updated: 2020/05/12 21:45:52 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*array;
	size_t			i;

	i = 0;
	array = (unsigned char*)arr;
	while (n--)
	{
		if (array[i] == (unsigned char)c)
			return ((void *)arr + i);
		i++;
	}
	return (NULL);
}
