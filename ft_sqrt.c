/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:45:25 by smyeni            #+#    #+#             */
/*   Updated: 2017/09/05 16:26:57 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int		x;
	int		i;

	i = 0;
	x = 1;
	while (i <= (nb / 2))
	{
		if (x * x == nb)
			return (x);
		x = (x + nb / x) / 2;
		i++;
	}
	return (0);
}
