/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:47:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 08:47:22 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy len bytes string, he two strings may overlap
//The two strings may overlap

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	tmp;

	tmp = len;
	if (dst > src)
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main()
// {
// 	// char p[10] = "0123456789"; //012045
// 	printf("%s", ft_memmove(NULL, NULL, 0));
// 	// printf("%p\n", p);
// 	printf("%s", memmove(NULL, NULL, 0));
// }