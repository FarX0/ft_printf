/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:28:00 by tfalchi           #+#    #+#             */
/*   Updated: 2023/10/09 11:28:02 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		n;
	char	*ptr;

	i = 0;
	n = 0;
	ptr = (char *)big;
	if (little[0] == '\0')
		return (ptr);
	while (big[i] && len != 0)
	{
		while (ptr[i + n] == little[n] && little[n] && len - n != 0)
		{
			n++;
		}
		if (little[n] == '\0')
			return (&ptr[i]);
		n = 0;
		i++;
		len--;
	}
	return (NULL);
}
