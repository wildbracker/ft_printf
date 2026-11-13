/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:09:33 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/13 15:00:31 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int i;
    int j;

    va_start(ap, format);
    i = 0;
    j = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            j += put(ap, format[++i]);
            i++;
            continue;
        }
        ft_putchar_fd(format[i++], 1);
    }
    va_end(ap);
    return (i + j);
}
