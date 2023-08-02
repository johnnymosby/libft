/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:21:13 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:06:10 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (size == 0)
	{
		while (src[n])
			n++;
		return (n);
	}
	size -= 1;
	while (src[n] && n < size)
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	while (src[n])
		n++;
	return (n);
}
