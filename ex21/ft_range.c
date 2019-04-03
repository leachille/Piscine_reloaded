/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:22:05 by lachille          #+#    #+#             */
/*   Updated: 2019/04/03 21:23:30 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
  int i;
  int *tab;

  if ( min >= max)
    return (0);
  if(!(tab = malloc(sizeof(*tab) * max - min)))
    return (0);
  while (min < max)
  {
    tab[i] = min;
    min++;
  }
  return (*tab);
}
