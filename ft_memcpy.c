/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 19:19:30 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/10 20:34:38 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (n == 0)
		return (s1);
	*s1 = *s2;
	ft_memcpy(++s1, ++s2, --n);
	return (dst);
}
