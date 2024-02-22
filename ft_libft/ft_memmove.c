/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:27:22 by tfalchi           #+#    #+#             */
/*   Updated: 2023/11/14 09:31:37 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptrs;
	char	*ptrd;

	i = 0;
	ptrs = (char *)src;
	ptrd = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (ptrd <= ptrs)
	{
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			ptrd[n] = ptrs[n];
	}
	return (dest);
}
