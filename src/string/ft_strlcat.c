/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:43 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:06:09 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size != 0)
	{
		while (dst[d] != '\0' && d < size)
			d++;
		i = 0;
		while (src[i] != '\0' && d + i + 1 < size)
		{
			dst[i + d] = src[i];
			i++;
		}
		if (d != size)
			dst[i + d] = '\0';
	}
	return (d + s);
}
