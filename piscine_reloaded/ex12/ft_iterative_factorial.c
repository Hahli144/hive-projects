/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:23:01 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/16 14:25:42 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	if (nb < 0 || nb > 12)
		return (0);
	total = 1;
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
