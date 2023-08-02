/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbasyrov <rbasyrov@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:37:43 by rbasyrov          #+#    #+#             */
/*   Updated: 2023/08/02 23:27:24 by rbasyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*crop_left(int fd, char *buffer, char *leftover)
{
	ssize_t	n_read;
	char	*story;

	n_read = 1;
	while (n_read > 0)
	{
		n_read = read(fd, buffer, BUFFER_SIZE);
		if (n_read < 0)
			return (NULL);
		else if (n_read == 0)
			break ;
		buffer[n_read] = '\0';
		if (!leftover)
			leftover = ft_strdup("");
		story = leftover;
		leftover = ft_strjoin(story, buffer);
		free(story);
		story = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (leftover);
}

static char	*crop_right(char *ret)
{
	char	*new_leftover;
	ssize_t	i;

	i = 0;
	while (ret[i] != '\0' && ret[i] != '\n')
		i++;
	if (ret[i] != '\n' || ret[i + 1] == '\0')
		return (NULL);
	new_leftover = ft_substr(ret, i + 1, ft_strlen(ret) - i);
	if (new_leftover == NULL)
		return (NULL);
	if (new_leftover[0] == '\0')
	{
		free(new_leftover);
		return (NULL);
	}
	ret[i + 1] = '\0';
	return (new_leftover);
}

char	*get_next_line(int fd)
{
	static char	*leftover[FD_MAX];
	char		*buffer;
	char		*ret;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	else if (read(fd, 0, 0) < 0)
	{
		free(leftover[fd]);
		leftover[fd] = NULL;
		return (NULL);
	}
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	ret = crop_left(fd, buffer, leftover[fd]);
	free(buffer);
	if (!ret)
		return (NULL);
	leftover[fd] = crop_right(ret);
	return (ret);
}
