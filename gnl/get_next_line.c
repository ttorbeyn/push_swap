/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:00:23 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/19 16:00:26 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_free(char **save, char **buffer, int a, int b)
{
	if (a && save)
	{
		free(*save);
		*save = NULL;
	}
	if (b && buffer)
	{
		free(*buffer);
		*buffer = NULL;
	}
	return (1);
}

static int	ft_save(int fd, char **save, char **line)
{
	int		ret;
	char	*buffer;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return ((ft_free(save, &buffer, 1, 1)) - 2);
	ret = read(fd, buffer, BUFFER_SIZE);
	if (ret == -1)
		return ((ft_free(save, &buffer, 1, 1)) - 2);
	if (ret == 0)
	{
		*line = ft_strdup(*save);
		if (!(*line))
			return (ft_free(save, &buffer, 1, 1) - 2);
		return (ft_free(save, &buffer, 1, 1) - 1);
	}
	buffer[ret] = '\0';
	*save = ft_strjoin(*save, buffer);
	if (!(*save))
		return (ft_free(save, &buffer, 1, 1) - 2);
	return (ret);
}

static int	ft_strdup_modified(char **line, char **save, int i)
{
	char	*tmp;

	save[0][i] = '\0';
	tmp = *save;
	*line = ft_strdup(tmp);
	if (!(*line))
		return (ft_free(save, line, 1, 0) - 2);
	*save = ft_strdup(&tmp[i + 1]);
	if (!(*save))
		return (ft_free(save, line, 1, 0) - 2);
	free(tmp);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*save[OPEN_MAX];
	int			i;
	int			ret;

	i = 0;
	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1 || !line)
		return (-1);
	if (!save[fd])
		save[fd] = ft_strdup("");
	if (!(save[fd]))
		return (ft_free(&save[fd], line, 1, 0) - 2);
	while (1)
	{
		if (save[fd][i] == '\n')
			return (ft_strdup_modified(line, &save[fd], i));
		if (save[fd][i] == '\0')
		{
			ret = ft_save(fd, &save[fd], line);
			if (ret == -1 || ret == 0)
				return (ret);
			i--;
		}
		i++;
	}
	return (0);
}
