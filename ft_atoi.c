/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 08:27:05 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/11 08:27:19 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int a, int b)
{
	if (a > 19 && b > 0)
		return (-1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int n;
	int v;
	int d;

	n = 1;
	i = 0;
	v = 0;
	d = 0;
	while (str[i] == '\r' || str[i] == ' ' || str[i] == '\t' ||
			str[i] == '\n' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		v = (v * 10) + (int)str[i] - '0';
		i++;
		d++;
	}
	if (d > 19)
		return (ft_check(d, n));
	return (v * n);
}
