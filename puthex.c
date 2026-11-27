/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:35:32 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/26 23:55:43 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hdc(unsigned int n)
{
	int	i;

	i = 1;
	while (n /= 16)
		i++;
	return (i);
}

int	puthex(unsigned int n, char *base)
{
	int i;

	i = 0;
	if (n >= 16)
		i += puthex(n / 16, base);
	i += ft_putchar(base[n % 16]);
	if (i != hdc(n))
		return (-1);
	return (i);
}
