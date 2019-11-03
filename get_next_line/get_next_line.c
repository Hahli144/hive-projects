/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:36:30 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/25 15:45:30 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	extend_buf(int fd, char **buf)
{
  char tmp[BUFF_SIZE + 1];
  int amount;

  amount = read(fd, tmp, BUFF_SIZE);
  tmp[amount] = '\0';
  *buf = ft_strjoin(*buf, tmp);
  //unreleased memory still exists
  return (amount == BUFF_SIZE);
}
int	get_next_line(const int fd, char **line)
{
  static char *buf = "";
  //char **tmp;
  int i;

  while (strchr(buf, '\n') == NULL)
    {      
      if (!extend_buf(fd, &buf))
	break;
    }
  i = 0;
  //find a way to malloc the right amount of memory to line before copying characters to it,
  //maybe by incrementing i until a newline is found and then strncpy.
  //if null character is found that means reading has ended.
  while (buf[i] != '\n' && buf[i] != '\0')
    i++;
  *line = ft_strsub(buf, 0, i + 1);
  //tmp = &buf;
  buf = ft_strsub(buf, i + 1, ft_strlen(buf) - i);
  //ft_strdel(tmp);
  return (1);
}

/*
int	get_next_line(const int fd, char **line)
{
  char *buf;
  int amount;
  //static char *save;

  buf = (char*)malloc(BUFF_SIZE + 1);
  while ((amount = read(fd, buf, BUFF_SIZE)) > 0)
    {
      buf[amount] = 0;
      ft_putstr(buf);
      ft_strdel(&buf);
      buf = (char*)malloc(BUFF_SIZE + 1);
    }
  (void)line;
  return (0);
}
*/
