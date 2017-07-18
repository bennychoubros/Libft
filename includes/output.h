/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 16:00:08 by bviala            #+#    #+#             */
/*   Updated: 2017/06/29 16:00:10 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "libft.h"

void				ft_putendl(char const *s);
void				ft_putnbr(int nb);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_base(int nb, int base);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putwchar(wchar_t str);
int					ft_putnwstr(const wchar_t *str, int len);

#endif