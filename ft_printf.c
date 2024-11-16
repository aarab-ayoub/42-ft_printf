/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:34:55 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/16 11:34:24 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	calculate(char c, va_list ptr)
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
		count += ft_putnbr(va_arg(ptr, int));
	else if (c == 'u')
		count += ft_putu(va_arg(ptr, unsigned int));
	else if (c == 'X')
		count += ft_puthex(va_arg(ptr, unsigned int), 1);
	else if (c == 'x')
		count += ft_puthex(va_arg(ptr, unsigned int), 0);
	else if (c == 'p')
		return (ft_putstr("0x") + ft_putp(va_arg(ptr, unsigned long)));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		count;
	int		i;

	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(ptr, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += calculate(format[i], ptr);
		}
		else if (format[i] != '%')
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}
