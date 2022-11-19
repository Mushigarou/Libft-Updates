/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 07:36:38 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 05:03:42 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node new at the beginning of the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && *lst)
		new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list	*n0;
// 	t_list	*n2;
// 	t_list	*n3;

// 	n0 = NULL;
// 	ft_lstadd_front(&n0, (n2 = ft_lstnew("My")));
// 	ft_lstadd_front(&n0, (n3 = ft_lstnew("Hey, ")));

// 	while(n3)
// 	{
// 		printf("%s", n3->content);
// 		n3 = n3->next;
// 	}

// }