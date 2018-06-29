/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:46:08 by smyeni            #+#    #+#             */
/*   Updated: 2017/09/05 16:22:55 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		ft_power_for_itoa(long nb, long power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

char			*ft_itoa_base(int n, int base)
{
	char	*str;
	int		i;
	int		length;

	if (base < 2 || base > 16 || (base != 10 && n < 0))
		return (NULL);
	if (base == 10)
		return (ft_itoa(n));
	length = 1;
	while (ft_power_for_itoa(base, length) <= n)
		length++;
	str = (char*)malloc(sizeof(*str) * (length + 1));
	i = 0;
	while (i < length)
	{
		if (base > 10 && (n % base >= 10))
			str[i++] = (n % base) - 10 + 'A';
		else
			str[i++] = (n % base) + '0';
		n /= base;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
