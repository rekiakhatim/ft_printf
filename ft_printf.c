/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:09:05 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/20 17:56:37 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(n);
	len = ft_printstr(nbr);
	free(nbr);
	return (len);
}

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_printadd(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_print_hex(va_arg(args, unsigned int), 'x');
	else if (format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), 'X');
	else if (format == '%')
		len += ft_printpercnt();
	else
		ft_printchar(format);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '\0')
				break ;
			len += ft_format(args, s[i + 1]);
			i++;
		}
		else
			len += ft_printchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
// int	main(void)
// {
// 	char *s = NULL;
// 		int count =  ft_printf ("%X","hello");
// 	int co =  printf (NULL,-45);
// 	printf ("%d \n %d", count, co);
// 	ft_printf(" hi my name is %s %r \n ", "rekia");
// 	printf(" hi my name is %s %r \n ", "rekia");
// }