/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:33:09 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/19 02:46:26 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalnum(int c);
int ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int ft_toupper(int  c);
int ft_tolower (int c);
size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_strncmp(const char *s1, const char *s2, size_t n);


#endif