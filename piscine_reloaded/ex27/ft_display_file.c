/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:35:40 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/16 15:41:06 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[4097];
	int		i;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "open() error", 12);
	}
	ret = read(fd, buf, 4096);
	buf[4096] = '\0';
	i = 0;
	while (i < ret)
	{
		write(1, &buf[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
