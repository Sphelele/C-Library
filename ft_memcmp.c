/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 08:47:14 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/11 08:47:21 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)s1 == *(unsigned char*)s2)
		{
			s1++;
			s2++;
		}
		else
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
	}
	return (0);
}
