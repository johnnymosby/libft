/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:41:48 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:05:58 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	size_t		i;
	char		*t;
	char		*f;

	if (!to || !from)
		return (0);
	t = (char *)to;
	f = (char *)from;
	i = 0;
	if (to < from)
	{
		while (i < size)
		{
			t[i] = f[i];
			i++;
		}
	}
	else
	{
		while (size-- > 0)
			t[size] = f[size];
	}
	return (to);
}
