/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putunbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:35:22 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/20 14:00:03 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	udc(int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

int	putunbr(unsigned int n)
{
	int i;

	i = 0;
	if (n >= 10)
		i += putunbr(n / 10);
	i += ft_putchar(n % 10 + '0');
	if (i - udc(n))
		return (-1);
	return (i);
}