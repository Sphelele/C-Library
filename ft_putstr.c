/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 23:07:32 by smyeni            #+#    #+#             */
/*   Updated: 2017/06/03 01:43:46 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s == NULL)
	{
		ft_putstr("(null)");
		return ;
	}
	if (*s == 0)
		return ;
	ft_putchar(*s);
	ft_putstr(++s);
}