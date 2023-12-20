/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:05:17 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/19 16:46:39 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_count(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		j;
	long	nbr;

	nbr = n;
	n = 0;
	j = ft_count(nbr);
	p = (char *)malloc(j + 1);
	if (!p)
		return (NULL);
	p[j--] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		p[0] = '-';
		n = 1;
	}
	while (j >= n)
	{
		p[j--] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (p);
}
