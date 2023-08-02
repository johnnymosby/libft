/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:22:11 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:06:13 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	p = (char *) haystack;
	if (needle[0] == '\0')
		return (p);
	if (!len)
		return (0);
	while (p[i] && i < len)
	{
		j = 0;
		while ((p[i + j] == needle[j]) && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (p + i);
			j++;
		}
		i++;
	}
	return (0);
}
