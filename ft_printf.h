/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:07:55 by tfalchi           #+#    #+#             */
/*   Updated: 2023/12/19 11:18:17 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdlib.h>
# include "ft_libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_string(char *str);
int	print_pointer(unsigned long int pointer);
int	print_int(int i);
int	print_unsigned(unsigned int uns);
int	print_hex(unsigned long hex, char *base);
int	printformat(char c, va_list ap);

#endif