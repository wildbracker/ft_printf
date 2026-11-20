/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:15:25 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/20 10:30:27 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put(va_list ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (putstr(va_arg(ap, char *)));
	else if (c == 'd' || c == 'i')
		return (putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (putunbr(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (puthex(va_arg(ap, int), "0123456789abcdef"));
	else if (c == 'X')
		return (puthex(va_arg(ap, int), "0123456789ABCDEF"));
	else if (c == 'p')
		return (putpntr(va_arg(ap, long)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar('%') + ft_putchar(c));
}
