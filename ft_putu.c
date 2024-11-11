/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:32:21 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/10 16:32:30 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int i)
{
	int	count;

	count = 0;
	if (i > 9)
	{
		count += ft_putu(i / 10);
		count += ft_putu(i % 10);
	}
	else
		count += ft_putchar(i + '0');
	return (count);
}
