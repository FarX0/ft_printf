/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:25:23 by tfalchi           #+#    #+#             */
/*   Updated: 2023/11/16 09:37:29 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static size_t	ft_countw(char const *s, char c);
static size_t	controlwlen(char const *s, char c, size_t word_len);
static int		freemat(char **mat);

char	**ft_split(char const *s, char c)
{
	char	**mat;
	size_t	word_len;
	int		i;

	i = 0;
	word_len = 0;
	mat = ft_calloc((ft_countw(s, c) + 1), sizeof(char *));
	if (s == 0 || mat == 0)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = controlwlen(s, c, word_len);
			mat[i] = ft_substr(s, 0, word_len);
			if (mat[i++] == 0)
				if (freemat(mat) == 0)
					return (NULL);
			s += word_len;
		}
	}
	mat[i] = NULL;
	return (mat);
}

static size_t	controlwlen(char const *s, char c, size_t word_len)
{
	if (ft_strchr(s, c) == 0)
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	return (word_len);
}

static int	freemat(char **mat)
{
	int	i;

	i = 0;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
	return (0);
}

static size_t	ft_countw(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (*s == 0)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}
/*
alloca e ritorna una matrice fatta da stringe suddivise dal 
carattere c. finisce con un puntatore nullo.


#include <stdio.h>

int	main(void)
{
	int		i;
	char	*str;
	char	**mat;

	i = 0;
	while (i != INT_MAX)
	{
		str[i] = "a";
	}
	mat = ft_split(str, "a");
	return (0);
}*/
//controllo delle c, aumento count, controllo fino alla nuova c
