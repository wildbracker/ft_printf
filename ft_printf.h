/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalaini <amalaini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:26:14 by amalaini          #+#    #+#             */
/*   Updated: 2026/11/16 14:39:25 by amalaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
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
