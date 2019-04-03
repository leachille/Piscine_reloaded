/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 23:32:06 by lachille          #+#    #+#             */
/*   Updated: 2019/04/04 01:38:26 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (0);
	if (!(tab = malloc(sizeof(*tab) * max - min)))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
	}
	return (tab);
}
