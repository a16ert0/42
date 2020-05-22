/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 18:13:34 by hetha             #+#    #+#             */
/*   Updated: 2020/05/12 21:48:16 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*array;

	if (n + 1 <= 0 || n + 1 < n)
		return ;
	array = (unsigned char *)s;
	while (n != 0)
	{
		*array++ = 0;
		n--;
	}
}
