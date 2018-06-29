/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:06:30 by smyeni            #+#    #+#             */
/*   Updated: 2017/09/05 16:54:30 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	length;
	char	*str;

	if (!s1)
		return (NULL);
	length = ft_strlen(s1);
	if (n < length)
		length = n;
	if (!(str = (char*)malloc(length + 1)))
		return (NULL);
	ft_strncpy(str, s1, length);
	return (str);
}
