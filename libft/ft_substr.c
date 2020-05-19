/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 18:18:53 by hetha             #+#    #+#             */
/*   Updated: 2020/05/19 01:21:32 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	undigned int	j;

	i = 0;
	j = 0;
	if (s == 0)
		return (NULL);
	if (!(ptr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = start;
	while (str[i] != '\0' && len--)
		ptr[j++] = str[i++];
	ptr[j] = '\0';
	return (ptr);
}
