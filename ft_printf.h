/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <jaragao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:54:07 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/29 17:07:56 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_output(va_list ptr, char c, int length);
int		ft_printchar(char a);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printhex(unsigned int n, char c);
int		ft_hexlen(unsigned int n);
void	ft_puthex(unsigned int n, char c);
int		ft_printunsigned(unsigned int n);
int		ft_numlen(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_printptr(unsigned long long n);
int		ft_ptrlen(unsigned long long n);
void	ft_putptr(unsigned long long n);

#endif