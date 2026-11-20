/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:26:14 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/20 10:59:00 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <unistd.h>
# include <stdarg.h>

int	put(va_list ap, char c);
int	ft_putchar(char c);
int	puthex(int a, const char *base);
int	putnbr(int a);
int	putunbr(unsigned int a);
int	putpntr(long a);
int	putstr(char *s);
int	ft_printf(const char *format, ...);
#endif
