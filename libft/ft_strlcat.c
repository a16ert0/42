/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 01:19:57 by hetha             #+#    #+#             */
/*   Updated: 2020/05/14 14:02:33 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			len;
	size_t			size_min;
	char			*array;

	i = 0;
	j = 0;
	if (size + 1 <= 0 || size + 1 < size)
		return (0);
	size_min = size - 1;
	array = (char *)src;
	len = ft_strlen(array) + ft_strlen(dst);
	if (size <= ft_strlen(dst))
		return (ft_strlen(array) + size);
	while (dst[i] != '\0' && size_min--)
		i++;
	while (array[j] != '\0' && size_min--)
		dst[i++] = array[j++];
	dst[i] = '\0';
	return (len);
}
