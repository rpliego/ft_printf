/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:08:08 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/20 20:08:09 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_if(char c, va_list args, int out)
{
	if (c == 'c')
		out = ft_printc(out, va_arg(args, int));
	else if (c == 's')
		out = ft_printstr(out, va_arg(args, int));
}

int	ft_find(char *str, va_list args, int out)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			out = ft_if(str[i], args, out);
		}
		else
			out = ft_printc(str[i], out);
		i++;
	}
	return (out);
}

int	ft_printf(char const *n, ...)
{
	va_list	ap;
	int		out;

	out = 0;
	va_start (ap, n);
	out = ft_find(n, ap, out);
	va_end (ap);
	return (out);
}
