/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:55:11 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:06:12 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	a = s1[i];
	b = s2[i];
	while ((a || b) && (i < size))
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
