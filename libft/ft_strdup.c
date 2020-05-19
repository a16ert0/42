/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:28:52 by hetha             #+#    #+#             */
/*   Updated: 2020/05/18 18:14:07 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		len;

	len = strlen((char *)str);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr != NULL)
		strcpy(ptr, (char *)str);
	else
		return (NULL);
	return (ptr);
}
