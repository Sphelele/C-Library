/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:12:34 by smyeni            #+#    #+#             */
/*   Updated: 2017/09/05 16:51:31 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (s)
	{
		i = 0;
		if (!(sub = (char*)malloc(sizeof(*s) * (len + 1))))
			return (NULL);
		while (s[start] && len-- > 0)
			sub[i++] = s[start++];
		sub[i] = '\0';
		return (sub);
	}
	else
		return (NULL);
}
