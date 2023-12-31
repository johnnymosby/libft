/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:44:05 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:06:16 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find(const char c, char const *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*p;
	size_t		i;
	size_t		len;

	if (!s1 || !set)
		return (0);
	i = 0;
	len = 0;
	while (ft_find(s1[i], set) == 1)
		i++;
	while (s1[i + len])
		len++;
	while (len != 0 && ft_find(s1[i + len - 1], set) == 1)
		len--;
	p = malloc(len + 1);
	if (!p)
		return (0);
	p[len] = '\0';
	while (len-- != 0)
	{
		p[len] = (char)s1[i + len];
	}
	return (p);
}
