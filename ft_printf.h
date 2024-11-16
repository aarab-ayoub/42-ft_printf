/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:50:29 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/12 16:32:38 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_putnbr(int n);
int	ft_strlen(const char *str);
int	ft_putu(unsigned int i);
int	ft_puthex(unsigned int n, int a);
int	ft_printf(const char *format, ...);
int	ft_putp(unsigned long n);

#endif