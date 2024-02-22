/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:27:41 by tfalchi           #+#    #+#             */
/*   Updated: 2023/11/17 12:42:44 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	k;
	unsigned int	i;

	i = 0;
	k = 0;
	while (src[i] != 0)
		i++;
	if (size == 0)
		return (i);
	while (k < size - 1 && src[k] != '\0')
	{
		dst[k] = src[k];
		k++;
	}
	if (k < size)
		dst[k] = '\0';
	while (src[k] != '\0')
		k++;
	return (k);
}
