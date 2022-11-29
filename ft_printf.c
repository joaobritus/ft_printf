/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <jaragao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:09:09 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/29 15:02:04 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char a)
{
	write(1, &a, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	char *zas;
	int	len;

	len = 0;
	zas = ft_itoa(n);
	len = ft_printstr(zas);
	free(zas);
	return (len);
}

int	ft_output(va_list ptr, char c, int length)
{
	if (c == 'c')
		return (length += write(1, va_arg(ptr, char), 1));
	else if (c == 's')
		return (length += ft_printstr(va_arg(ptr, *char)));
	else if (c == 'd' || c == 'i')
		return (length += ft_printnbr(var_arg(ptr, int)));
	else if (c == 'x' || == 'X')
		return (length += ft_printhex(var_arg(ptr, unsigned int), c));
	else if (c == 'u')
		return (length += ft_printunsigned(var_arg(ptr, unsigned int)));
	else if (c == 'p')
		return (length += ft_printptr(var_arg(ptr, unsigned long long)));
	else if (c == '%')
		write(1, '%', 1);
	else
		return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	ptr;

	i = 0;
	length = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += ft_output(ptr, str[i], length);
		}
		else
			length += write(1, str[i], 1);
		i++;
	}
	va_end(ptr);
	return (length);
}
