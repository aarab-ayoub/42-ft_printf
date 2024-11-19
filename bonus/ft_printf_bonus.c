/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:34:55 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/18 16:08:40 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	calculate(char c, va_list ptr, t_flags flags)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ptr, char *));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(ptr, int), flags.plus, flags.space);
	else if (c == 'u')
		count += ft_putu(va_arg(ptr, unsigned int));
	else if (c == 'X')
		count += ft_puthex(va_arg(ptr, unsigned int), 1, flags.hash);
	else if (c == 'x')
		count += ft_puthex(va_arg(ptr, unsigned int), 0, flags.hash);
	else if (c == 'p')
		return (ft_putstr("0x") + ft_putp(va_arg(ptr, unsigned long)));
	else
		count += ft_putstr("%") + ft_putchar(c);
	return (count);
}

static int	parse_flags(const char *format, int *i, t_flags *flags)
{
	while (format[*i] == '+' || format[*i] == ' ' || format[*i] == '#')
	{
		if (format[*i] == '+')
			flags->plus = 1;
		else if (format[*i] == ' ')
			flags->space = 1;
		else if (format[*i] == '#')
			flags->hash = 1;
		(*i)++;
	}
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		count;
	int		i;
	t_flags	flags;

	count = 0;
	if (!format || write(1, 0, 0) == -1)
		return (-1);
	va_start(ptr, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			flags = (t_flags){0, 0, 0};
			parse_flags(format, &i, &flags);
			count += calculate(format[i], ptr, flags);
		}
		else if (format[i] != '%')
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}
