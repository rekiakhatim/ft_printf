/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:42:04 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/18 14:04:37 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_n_len(unsigned int num)
{
	int	l;

	l = 0;
	while (num != 0)
	{
		num = num / 10;
		l++;
	}
	return (l);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		l;

	l = ft_n_len(n);
	num = (char *)malloc(sizeof(char) * (l + 1));
	if (!num)
		return (0);
	num[l] = '\0';
	while (n != 0)
	{
		num[l - 1] = n % 10 + 48;
		n = n / 10;
		l--;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}
