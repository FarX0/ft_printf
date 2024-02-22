/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:24:48 by tfalchi           #+#    #+#             */
/*   Updated: 2023/11/14 09:34:43 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*creationitoa(int n, long seg, int c);

char	*ft_itoa(int n)
{
	size_t	c;
	int		i;
	long	seg;

	seg = n;
	i = n;
	c = 0;
	if (i <= 0)
		c++;
	while (i != 0)
	{
		i = i / 10;
		c++;
	}
	return (creationitoa (n, seg, c));
}

static char	*creationitoa(int n, long seg, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_calloc (c + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		seg *= -1;
	}
	str[c] = '\0';
	while (c > 0 + (n < 0))
	{
		c--;
		str[c] = ((seg % 10) + 48);
		seg = seg / 10;
	}
	return (str);
}

/*int to ascii*/
