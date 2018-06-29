/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:52:14 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/10 20:54:42 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *d;

	d = dst;
	while (*src)
	{
		if (!len--)
			return (dst);
		*d++ = *src++;
	}
	while (len--)
		*d++ = 0;
	return (dst);
}
