/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpntr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:35:35 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/19 11:07:43 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lhdc(long n)
{
	int	i;

	i = 1;
	while (n /= 16)
		i++;
	return (i);
}

int	putlhex(long n, char *base)
{
	long long	a;
	int			i;

	a = n;
	i = 0;
	if (a < 0)
	{
		i += ft_putchar('-');
		a = -a;
	}
	if (a >= 0)
		i += putlhex(a / 16, base);
	i += ft_putchar(base[a % 16]);
	if ((i - lhdc(a) && n >= 0) || (i - lhdc(a) - 1 && n < 0))
		return (-1);
	return (i);
}

int	putpntr(long n)
{
	int i;

	i = 0;
	i += putstr("0x");
	i += putlhex(n, "0123456789abcdef");
	if ((i != lhdc + 2 && n >= 0) || (i != lhdc + 3 && n < 0))
		return (-1);
	return (i);
}