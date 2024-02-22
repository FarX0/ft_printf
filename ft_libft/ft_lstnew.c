/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:51:32 by tfalchi           #+#    #+#             */
/*   Updated: 2023/11/16 09:35:29 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = malloc (sizeof(t_list));
	if (temp == 0)
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}
/*alloca un nuovo nodo con malloc con content al suo interno e null come next*/
