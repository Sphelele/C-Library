/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 08:43:02 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/11 08:43:17 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	nu;
	char	*str1;
	char	*str2;

	if (!*s2)
		return ((void *)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			nu = n;
			str1 = (void *)s1 + 1;
			str2 = (void *)s2 + 1;
			while (nu-- && *str1 && *str2 && *str1 == *str2)
			{
				++str1;
				++str2;
			}
			if (!*str2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
