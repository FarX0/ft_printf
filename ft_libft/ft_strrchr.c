/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:28:11 by tfalchi           #+#    #+#             */
/*   Updated: 2023/11/17 12:06:09 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		n;

	i = 0;
	n = -1;
	while (s[i])
	{
		if (s[i] == (const char) c)
			n = i;
		i++;
	}
	if (s[i] == (const char)c)
		n = i;
	if (n != -1)
		return ((char *)(&(s[n])));
	return (NULL);
}
