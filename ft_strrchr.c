/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 22:21:26 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/11 10:37:31 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	int		flag;
	char	*f_ad;

	flag = 0;
	str = (char*)s;
	ch = (char)c;
	f_ad = str;
	while (*str)
		str++;
	while (*str != ch && str != f_ad)
		str--;
	if (*str == ch)
		return (str);
	else
		return (NULL);
}
