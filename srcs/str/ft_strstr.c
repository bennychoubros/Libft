/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:56:54 by bviala            #+#    #+#             */
/*   Updated: 2017/07/18 14:56:55 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(const char *str, const char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i] == str[i] && to_find[i] && str[i])
		i++;
	if (to_find[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strstr(const char *str, const char *to_find)
{
	int		i;

	i = 0;
	if (!(to_find[i]))
		return ((char*)str);
	while (str[i])
	{
		if ((str[i] == to_find[0]) && (find(&str[i], to_find)))
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
