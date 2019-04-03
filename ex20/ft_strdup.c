/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:22:08 by lachille          #+#    #+#             */
/*   Updated: 2019/04/03 21:23:29 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
  char *dest;
  int i;

  i = 0;
  while (src[i] != '\0')
    i++;
  if(!(dest = malloc(sizeof(*dest) * i + 1)))
    return (0);
  i = 0;
  while (src[i] != '\0')
    dest[i] = src[i];
  return (*dest);
}
