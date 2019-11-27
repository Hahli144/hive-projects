/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:39:07 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/21 13:44:04 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strfill(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		s[i] = c;
		i++;
	}
}
