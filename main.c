/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:55:54 by tfalchi           #+#    #+#             */
/*   Updated: 2024/01/25 17:07:36 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"  // Include the header file for your ft_printf implementation
#include <stdio.h>               // Include the standard input/output library

int main(void) {
    // Test %c
    printf("Standard printf %%c: %c\n", 'A');
    ft_printf("Your ft_printf %%c: %c\n", 'A');

    // Test %s
	char *s = NULL;
    printf("Standard printf %%s: %s\n", s);
    ft_printf("Your ft_printf %%s: %s\n", s);

    // Test %p
    void *ptr = NULL;
    printf("Standard printf %%p: %p\n", ptr);
    ft_printf("Your ft_printf %%p: %p\n", ptr);

    // Test %d and %i
    printf("Standard printf %%d and %%i: %d, %i\n", 42, -42);
    ft_printf("Your ft_printf %%d and %%i: %d, %i\n", 42, -42);

    // Test %u
    printf("Standard printf %%u: %u\n", 123456789);
    ft_printf("Your ft_printf %%u: %u\n", 123456789);

    // Test %x
    printf("Standard printf %%x: %x\n", 255);
    ft_printf("Your ft_printf %%x: %x\n", 255);

    // Test %X
    printf("Standard printf %%X: %X\n", 255);
    ft_printf("Your ft_printf %%X: %X\n", 255);

    // Test %%
    printf("Standard printf %%%%: %%\n");
    ft_printf("Your ft_printf %%%%: %%\n");

    return 0;
}
