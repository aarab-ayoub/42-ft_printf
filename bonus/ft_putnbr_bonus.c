/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:50:43 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/18 16:20:14 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_handle_sign(int n, int plus_flag, int space_flag)
{
	int	count;

	count = 0;
	if (n > 0)
	{
		if (plus_flag)
			count += ft_putchar('+');
		else if (space_flag)
			count += ft_putchar(' ');
	}
	else if (n == 0 && plus_flag)
		count += ft_putchar('+');
	else if (n == 0 && space_flag)
		count += ft_putchar(' ');
	else if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	return (count);
}

int	ft_putnbr(int n, int plus_flag, int space_flag)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	count += ft_handle_sign(n, plus_flag, space_flag);
	if (n < 0)
		n = -n;
	if (n <= 9)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_putnbr(n / 10, 0, 0);
		count += ft_putchar(n % 10 + '0');
	}
	return (count);
}
