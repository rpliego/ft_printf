/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexlow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:55:09 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/23 19:55:11 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexlow(int out, unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		out = ft_printhexlow(out, n / 16);
		if (out == -1)
			return (-1);
	}
	out = ft_printc(out, base[n % 16]);
	if (out == -1)
		return (-1);
	return (out);
}
