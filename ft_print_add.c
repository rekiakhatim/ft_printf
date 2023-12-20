/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:15:43 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/19 16:48:53 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadd(unsigned long p)
{
	int	len;

	len = 0;
	len = ft_printstr("0x");
	len = len + ft_print_hex((unsigned long int)p, 'x');
	return (len);
}
