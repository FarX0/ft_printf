/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:27:13 by tfalchi           #+#    #+#             */
/*   Updated: 2023/10/09 11:27:14 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptrs;
	char	*ptrd;

	i = 0;
	ptrs = (char *)src;
	ptrd = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i != n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (ptrd);
}
