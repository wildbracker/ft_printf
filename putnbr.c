/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:35:28 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/19 11:04:40 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dc(int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

int	putnbr(int n)
{
	long	a;
	int		i;

	a = n;
	i = 0;
	if (a < 0)
	{
		i += ft_putchar('-');
		a = -a;
	}
	if (a >= 10)
		i += putnbr(a / 10);
	i += ft_puchar(a % 10 + '0');
	if ((i - dc(a) && n >= 0) || (i - dc(a) - 1 && n < 0))
		return (-1);
	return (i);
}
