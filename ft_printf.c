/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:09:33 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/11 12:28:32 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...){
    va_list ap;
    int i, j;
    va_start(ap, format);

    i = 0;
    j = 0;
    while (format[i])
    {
        if (i[format] == '%'){
            if(format[i+1] == 'c')
                ft_putchar_fd(format[i+1], 1);
            else if(format[i+1] == 's')
		ft_putstr_fd(format[i+1], 1);

        }
    }
    
}
