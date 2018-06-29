/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 23:26:05 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/10 21:41:04 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char				*r;
	const char			*l;
	char				*b_dup;

	l = little;
	b_dup = (char*)big;
	if (l && !l[0])
		return ((char*)big);
	while (*big != '\0')
	{
		little = l;
		while (*big != *little && *big != '\0' && big++)
			;
		r = (char *)big;
		while (*little == *big && *little != '\0')
		{
			big++;
			little++;
		}
		if (*little == '\0')
			return (r);
		else
			big = ++b_dup;
	}
	return (NULL);
}
