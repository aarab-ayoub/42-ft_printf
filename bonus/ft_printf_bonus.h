/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:50:29 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/17 15:52:32 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_flags
{
	int	plus;
	int	space;
	int	hash;
}		t_flags;

int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_strlen(const char *str);
int		ft_putu(unsigned int i);
int		ft_puthex(unsigned int n, int uppercase, int hash);
int		ft_putnbr(int n, int plus_flag, int space_flag);
int		ft_printf(const char *format, ...);
int		ft_putp(unsigned long n);

#endif
