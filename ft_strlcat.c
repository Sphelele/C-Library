/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 08:20:41 by smyeni            #+#    #+#             */
/*   Updated: 2017/09/05 16:32:00 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strlcat_cpy(const char *s, char *d, int free_space)
{
	while (*s != '\0')
	{
		if (free_space != 1)
		{
			*d = *s;
			d++;
			free_space--;
		}
		s++;
	}
	*d = '\0';
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*d;
	const char		*s;
	size_t			len;
	size_t			free_space;

	d = dst;
	s = src;
	free_space = size;
	while (free_space && *d != '\0')
	{
		d++;
		free_space--;
	}
	len = d - dst;
	free_space = size - len;
	if (!free_space)
		return (len + ft_strlen(src));
	ft_strlcat_cpy(s, d, free_space);
	return (len + ft_strlen(src));
}
