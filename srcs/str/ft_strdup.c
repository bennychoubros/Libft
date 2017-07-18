/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:53:06 by bviala            #+#    #+#             */
/*   Updated: 2017/07/18 14:53:07 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*dest;

	if (!(dest = (char*)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
