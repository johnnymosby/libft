/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:02:17 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:05:43 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(va_list ap)
{
	long long int		nbr;
	char				*base;
	int					p[64];
	int					i;
	int					j;

	i = 0;
	base = ft_strcreate("0123456789abcdef");
	nbr = (unsigned int)va_arg(ap, int);
	if (nbr == 0)
		free(base);
	if (nbr == 0)
		return (write(1, "0", 1));
	while (nbr > 0)
	{
		p[i] = nbr % 16;
		nbr /= 16;
		i++;
	}
	j = 8 * (i > 7) + i * (i <= 7);
	i = j;
	while (j > 0)
		ft_putchar(base[p[--j]]);
	free(base);
	return (i);
}
