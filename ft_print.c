/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:30:12 by tfalchi           #+#    #+#             */
/*   Updated: 2024/01/25 17:01:43 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	print_pointer(unsigned long int pointer)
{
	int				i;

	if (pointer == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i = print_hex(pointer, "0123456789abcdef");
	return (i + 2);
}

int	print_int(int i)
{
	int	n;

	n = 0;
	ft_putnbr_fd(i, 1);
	if (i < 0)
		n++;
	if (i == 0)
		return (1);
	while (i > 0 || i < 0)
	{
		i /= 10;
		n++;
	}
	return (n);
}

int	print_unsigned(unsigned int uns)
{
	long int	n;
	int			i;

	i = 0;
	n = uns;
	if (n < 0)
		n = __LONG_MAX__ + uns;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	if (uns == 0)
		i++;
	if (uns >= 10)
	{
		print_unsigned(uns / 10);
		print_unsigned(uns % 10);
	}
	else
	{
		ft_putchar_fd(uns + 48, 1);
	}
	return (i);
}

int	print_hex(unsigned long hex, char *base)
{
	char	str[32];
	int		i;
	int		c;

	if (hex == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (hex > 0)
	{
		str[i] = base[hex % 16];
		hex /= 16;
		i++;
	}
	c = i;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (c);
}
