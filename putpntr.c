/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpntr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:35:35 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/26 23:58:21 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lhdc(unsigned long n)
{
	int	i;

	i = 1;
	while (n /= 16)
		i++;
	return (i);
}

int	putlhex(unsigned long n)
{
	int			i;
	char		base[] = "0123456789abcdef";

	i = 0;
	if (n >= 16)
		i += putlhex(n / 16);
	if (i != lhdc(n) - 1)
		return (-1);
	i += ft_putchar(base[n % 16]);
	return (i);
}

int	putpntr(unsigned long n)
{
	int i;

	i = 0;
	if(!n)
		return(putstr("(nil)"));
	i += putstr("0x");
	i += putlhex(n);
	if (i != lhdc(n) + 2 )
		return (-1);
	return (i);
}