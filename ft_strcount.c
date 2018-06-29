/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:54:35 by smyeni            #+#    #+#             */
/*   Updated: 2017/09/05 16:28:05 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcount(char *str, char to_find)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == to_find)
			count++;
		str++;
	}
	return (count);
}
