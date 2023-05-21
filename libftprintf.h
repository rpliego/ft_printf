/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:36:25 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/20 19:36:28 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *x, ...);
int		ft_printc(int out, char c);
int		*ft_printstr(int out, char *str);

#endif