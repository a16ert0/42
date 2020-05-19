/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:04:24 by hetha             #+#    #+#             */
/*   Updated: 2020/05/16 00:09:26 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int		ft_toupper(int ch);

int		main(void)
{
	char ch;
	
	ch = 'z';
	printf ("%c", (char)ft_toupper(ch));
	return (0);
}
