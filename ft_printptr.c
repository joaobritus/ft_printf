/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <jaragao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:40:34 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/29 15:03:54 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(unsigned long long n)
{
	int	counter;

	counter = 0;
	while (n > 16)
	{
		n /= 16;
		counter++;
	}
	return (counter);
}

void	ft_putptr(unsigned long long n)
{
	char	*base;
	char	a;

	base = "0123456789abcdef";
	while (n > 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	a = base[n];
	write(1, &a, 1);
}

int	ft_printptr(unsigned long long n)
{
	int len;

	len = 0;
	if (!n)
	{
		len = write(1, "(nil)", 5);
		return (len);
	}
	len = write(1, "0x", 2);
	if (n == 0)
		len += write(1, "0", 1);
	else
		ft_putptr(n);
	return (ft_ptrlen);
}