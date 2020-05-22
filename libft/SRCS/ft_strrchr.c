/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 19:18:48 by hetha             #+#    #+#             */
/*   Updated: 2020/05/14 19:55:47 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	if (ft_strchr(str, ch) == NULL)
		return (NULL);
	while (*str)
		str++;
	while (*str != ch)
		str--;
	return ((char*)str);
}
