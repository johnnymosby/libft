/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:24:10 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 14:06:02 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int c)
{
	int	i;

	i = 0;
	if (c == 0)
	{
		while (string[i])
			i++;
		return ((char *)string + i);
	}
	while (string[i])
	{
		if ((const char) c == string[i])
			return ((char *)string + i);
		i++;
	}
	return (0);
}
