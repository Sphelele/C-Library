/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 00:33:27 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/11 05:30:47 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *value;

	value = (char *)malloc(sizeof(char) * ++size);
	if (value != NULL)
	{
		ft_memset(value, 0, size);
		return (value);
	}
	return (NULL);
}
