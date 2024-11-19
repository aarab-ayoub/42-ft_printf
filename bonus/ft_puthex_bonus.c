/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:28:12 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/17 15:20:59 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_puthex_rec(unsigned int n, int uppercase)
{
	char	*hex;
	int		count;

	count = 0;
	if (uppercase)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex_rec(n / 16, uppercase);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_puthex(unsigned int n, int uppercase, int hash)
{
	int	count;

	count = 0;
	if (hash && n != 0)
	{
		if (uppercase)
			count += ft_putstr("0X");
		else
			count += ft_putstr("0x");
	}
	count += ft_puthex_rec(n, uppercase);
	return (count);
}
