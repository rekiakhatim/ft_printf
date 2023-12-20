/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:54:04 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/19 16:47:48 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long int c, char forma)
{
	int		len;
	char	*base;

	if (forma == 'x')
		base = "0123456789abcdef";
	else if (forma == 'X')
		base = "0123456789ABCDEF";
	len = 0;
	if (c < 16)
	{
		len = len + ft_printchar(base[c]);
	}
	else
	{
		len = len + ft_print_hex(c / 16, forma);
		len = len + ft_print_hex(c % 16, forma);
	}
	return (len);
}
