/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:34:21 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/06 00:16:19 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_u(va_list ap)
{
	int				i;
	int				j;
	unsigned int	nb;
	char			*snb;

	nb = va_arg(ap, unsigned int);
	snb = malloc(10);
	i = 0;
	while (nb > 9)
	{
		snb[i] = '0' + nb % 10;
		nb /= 10;
		i++;
	}
	snb[i] = '0' + nb;
	j = i;
	while (i > -1)
	{
		ft_putchar(snb[i]);
		i--;
	}
	free(snb);
	return (j + 1);
}
