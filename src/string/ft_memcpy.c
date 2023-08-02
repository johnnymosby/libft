/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:41:40 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:05:57 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	int		i;
	char	*t;
	char	*f;

	if (to && from)
	{
		t = (char *)to;
		f = (char *)from;
		i = 0;
		while (size > 0)
		{
			t[i] = f[i];
			i++;
			size--;
		}
	}
	return (to);
}
