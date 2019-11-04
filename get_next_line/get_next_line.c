/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:36:30 by sadawi            #+#    #+#             */
/*   Updated: 2019/11/04 18:25:19 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	extend_buf(int fd, char **buf)
{
	char	tmp_buf[BUFF_SIZE + 1];
	char	*tmp_ptr;
	int		amount;

	amount = read(fd, tmp_buf, BUFF_SIZE);
	tmp_buf[amount] = '\0';
	tmp_ptr = ft_strjoin(*buf, tmp_buf);
	free(*buf);
	*buf = tmp_ptr;
	return (amount == BUFF_SIZE);
}

int			get_next_line(const int fd, char **line)
{
	static char	*buf[100] = {NULL};
	int			i;
	int			complete;
	char		*tmp_ptr;

	if (fd < 0 || read(fd, 0, 0) == -1)
		return (-1);
	complete = 0;
	if (buf[fd] == NULL)
		buf[fd] = (char*)malloc(1);
	while (ft_strchr(buf[fd], '\n') == NULL)
		if (!extend_buf(fd, &buf[fd]))
		{
			complete = 1;
			break ;
		}
	i = 0;
	while (buf[fd][i] != '\n' && buf[fd][i] != '\0')
		i++;
	*line = ft_strsub(buf[fd], 0, i);
	tmp_ptr = ft_strsub(buf[fd], i + 1, ft_strlen(buf[fd]) - i);
	free(buf[fd]);
	buf[fd] = tmp_ptr;
	return (!(complete && ft_strequ(*line, "")));
}
