/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:09:33 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/27 15:00:58 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i++])
		;
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		j;
	int		tmp;

	va_start(ap, format);
	i = 0;
	j = 0;
	if(!format || format[ft_strlen(format)-2] == '%')
		return (va_end(ap), -1);
	while (format[i])
	{
		tmp = j;
		if (format[i] == '%')
		{
			j += put(ap, format[++i]);
			i++;
		}
		else
			j += ft_putchar(format[i++]);
		if (tmp > j)
			return (va_end(ap), -1);
	}
	va_end(ap);
	return (j);
}
