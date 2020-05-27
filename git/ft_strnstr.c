/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 20:03:27 by hetha             #+#    #+#             */
/*   Updated: 2020/05/14 23:01:22 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*l;

	if (len + 1 <= 0 || len + 1 < len)
		return (NULL);
	l = little;
	if (*l == '\0')
		return ((char*)big);
	while (len--)
	{
		if (*l == *big)
			l++;
		else
		{
			big -= (l - little);
			len += (l - little);
			l = little;
		}
		big++;
		if (*l == '\0')
			return ((char*)(big - (l - little)));
		if (*big == '\0')
			break ;
	}
	return (NULL);
}
