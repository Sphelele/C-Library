/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_nolimit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smyeni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:02:52 by smyeni            #+#    #+#             */
/*   Updated: 2017/09/05 16:31:27 by smyeni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_nolimit(char delimiter, char *s1, ...)
{
	char	*new;
	char	*next;
	int		i;
	va_list	args;

	if (!s1)
		return (NULL);
	i = 0;
	va_start(args, s1);
	next = s1;
	new = ft_strnew(ft_strlen(s1));
	while (1)
	{
		while (*next)
			new[i++] = *next++;
		next = va_arg(args, char *);
		if (delimiter && next)
			new[i++] = delimiter;
		if (!next)
			break ;
		new = ft_mem_realloc(new, ft_strlen(new) + ft_strlen(next) + 1);
	}
	new[i] = '\0';
	va_end(args);
	return (new);
}
