/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 19:42:36 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/11 05:32:22 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *value;

	value = (char *)malloc(sizeof(char) * size);
	if (value != NULL)
	{
		ft_memset(value, 0, size);
		return (value);
	}
	return (NULL);
}
