/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 18:18:53 by hetha             #+#    #+#             */
/*   Updated: 2020/05/19 15:19:34 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;
	size_t			s_len;

	i = 0;
	j = 0;
	if (s == 0)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	if (!(ptr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = start;
	while (s[i] != '\0' && len--)
		ptr[j++] = s[i++];
	ptr[j] = '\0';
	return (ptr);
}
