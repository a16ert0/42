/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:13:31 by hetha             #+#    #+#             */
/*   Updated: 2020/05/15 18:09:02 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0 || num + 1 <= 0 || num + 1 < num)
		return (0);
	num--;
	while (s1[i] == s2[i] && num-- && s1[i] != 0 && s2[i] != 0)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
