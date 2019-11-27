/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:33:22 by sadawi            #+#    #+#             */
/*   Updated: 2019/11/27 18:32:10 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	t_block *blocks;

	blocks = NULL;
	if (argc != 2)
		ft_putstr("./fillit [input_file]\n");
	else
	{
		if (!store_blocks(&blocks, argv[1]))
			ft_putendl("error");
		else if (!check_amount(blocks))
			ft_putendl("error");
		else
		{
			solve(blocks);
			free_blocks(blocks);
		}
	}
	return (0);
}
