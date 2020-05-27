/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 00:20:23 by hetha             #+#    #+#             */
/*   Updated: 2020/05/18 17:11:25 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	register void	*ptr;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	ptr = malloc(num * size);
	if (ptr)
		ft_bzero(ptr, num * size);
	return (ptr);
}
