/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:13:49 by tfalchi           #+#    #+#             */
/*   Updated: 2023/12/19 11:30:40 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include <limits.h>

/*int	main(void)
{
	printf(" %i \n", ft_printf("mio NULL %s NULL ", NULL));
	printf(" %i \n", printf("gay NULL %s NULL ", NULL));
	return (0);
}*/

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		x;

	i = 0;
	x = 0;
	va_start (ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			x += printformat(str[i + 1], ap);
			i++;
		}
		else
			x += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (x);
}

int	printformat(char c, va_list ap)
{
	char	chr;

	if (c == 'c')
	{
		chr = va_arg(ap, unsigned int);
		write(1, &chr, 1);
		return (1);
	}
	else if (c == 's')
		return (print_string(va_arg(ap, char *)));
	else if (c == 'p')
		return (print_pointer(va_arg(ap, unsigned long int)));
	else if (c == 'd' || c == 'i')
		return (print_int(va_arg(ap, int)));
	else if (c == 'u')
		return (print_unsigned(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (print_hex(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (print_hex(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (write(1, &c, 1));
	else
		return (0);
}
