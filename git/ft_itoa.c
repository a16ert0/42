/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 23:14:22 by hetha             #+#    #+#             */
/*   Updated: 2020/05/21 23:23:59 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*res;
	long long int	sign;
	long long int	nn;
	long long int	len;

	len = 0;
	if ((sign = (long long int)n) < 0)
		sign = -sign;
	nn = n;
	while (nn /= 10)
		len++;
	if (n < 0)
		len++;
	if (!(res = (char *)malloc(sizeof(char) * (len + 2))))
		return (NULL);
	res[(len + 1)] = '\0';
	while ((len + 1) != 0)
	{
		res[len--] = (sign % 10) + 48;
		sign /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
