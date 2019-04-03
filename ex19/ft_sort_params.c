/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 23:18:22 by lachille          #+#    #+#             */
/*   Updated: 2019/04/03 23:19:42 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **av, int i)
{
	char	*tmp;

	tmp = av[i];
	av[i] = av[i + 1];
	av[i + 1] = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int nbarg, char **varg)
{
	int		i;

	i = 1;
	if (nbarg < 2)
		return (0);
	while (i + 1 < nbarg)
	{
		if (ft_strcmp(varg[i], varg[i + 1]) > 0)
		{
			ft_swap(varg, i);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < nbarg)
	{
		ft_putstr(varg[i]);
		i++;
	}
	return (0);
}
