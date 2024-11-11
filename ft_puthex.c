/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:28:12 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/10 16:37:49 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int a)
{
	char	*hex;
	int		count;

	count = 0;
	if (a)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex(n / 16, a);
	count += ft_putchar(hex[n % 16]);
	return (count);
}
// int main()
// {
// 	ft_puthex(0xff);
// 	return (0);
// }