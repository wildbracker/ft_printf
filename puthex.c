/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:35:32 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/16 14:10:23 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int dc(int n)
{
    int i;

    i = 1;
    while (n /= 16)
        i++;
    return i;
}

int puthex(int n, char *base)
{
    long a;
    int i;

    a = n;
    i = 0;
    if (a < 0)
    {
        i += ft_putchar('-');
        a = -a;
    }
    if (a >= 0)
        i += puthex(a / 16, base);
    i += ft_putchar(base[a % 16]);
    if ((i - dc(a) && n > 0) || (i - dc(a) - 1 && n < 0))
        return -1;
    return i;
}