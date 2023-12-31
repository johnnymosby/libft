/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:32:12 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:06:14 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	if (c == 0)
		return ((char *)string + i);
	i -= 1;
	while (i >= 0)
	{
		if ((const char) c == string[i])
			return ((char *)string + i);
		i--;
	}
	return (0);
}
