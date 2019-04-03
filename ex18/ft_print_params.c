/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:21:48 by lachille          #+#    #+#             */
/*   Updated: 2019/04/03 21:23:33 by lachille         ###   ########.fr       */
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

int main(int nbarg, char ** varg)
{
  int i;

  i = 1;
  if (nbarg < 2)
    return (0);
  while (i <= nbarg)
  {
    ft_putstr(varg[i]);
    i++;
  }
}
