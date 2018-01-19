/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <bviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:49:37 by bviala            #+#    #+#             */
/*   Updated: 2017/11/17 15:49:43 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		debug(char *format, ...)
{
	int			fd;
	va_list		ap;

	fd = open(DEBUG_WINDOW, O_RDWR);
	va_start(ap, format);
	vdprintf(fd, format, ap);
	va_end(ap);
	close(fd);
	return (1);
}
