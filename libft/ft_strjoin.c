/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:38:22 by hetha             #+#    #+#             */
/*   Updated: 2020/05/20 00:28:07 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;
	int		plen;
	int		slen;

	i = 0;
	j = 0;
	plen = ft_strlen(s1);
	slen = ft_strlen(s2);
	if (!(res = (char *)malloc((plen + slen + 1) * sizeof(char))))
		return (NULL);
	while (s1[i] != '\0' && plen--)
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && slen--)
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
