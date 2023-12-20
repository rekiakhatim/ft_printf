/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:07:11 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/19 19:01:16 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_format(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
char	*ft_itoa(int n);
int		ft_printpercnt(void);
void	ft_putstr(char *str);
char	*ft_uitoa(unsigned int n);
int		ft_n_len(unsigned int num);
int		ft_print_hex(unsigned long int c, char forma);
int		ft_printadd(unsigned long p);

#endif