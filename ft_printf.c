/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:09:33 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/23 23:11:26 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		j;
	int		tmp;

	va_start(ap, format);
	i = 0;
	j = 0;
	while (format[i])
	{
		tmp = j;
		if (format[i] == '%')
		{
			j += put(ap, format[++i]);
			i++;
			continue ;
		}
		j += ft_putchar(format[i++]);
		if (tmp > j)
			return (-1);
	}
	va_end(ap);
	return (j);
}
