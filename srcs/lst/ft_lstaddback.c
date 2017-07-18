/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 13:12:45 by bviala            #+#    #+#             */
/*   Updated: 2017/07/18 13:12:51 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!alst || !new)
		return ;
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
