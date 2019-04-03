/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:22:00 by lachille          #+#    #+#             */
/*   Updated: 2019/04/03 21:23:31 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar (char *c);
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      ft_putchar (str[i]);
      i++;
    }
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] != '\0' && s1[i] == s2[i])
    i++;
  return (s1[i] - s2[i])
}

int main(int nbarg, char ** varg)
{
  int i;

  i = 1;
  if (nbarg < 2)
    return (0);
  while (i + 1 <= nbarg)
  {
    if (ft_strcmp(varg[i], varg[i + 1]) < 0)
    {
      ft_swap(varg[i], varg[i + 1]);
      i--;
    }
    i++;
  }
  i = 1;
  while (i <= nbarg)
  {
    ft_putstr(varg[i]);
    i++;
  }
}
