/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:06:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/05 04:57:06 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the end of the list.
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = NULL;
	if (!(*lst))
		exit(0);
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}