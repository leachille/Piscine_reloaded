/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 00:00:02 by lachille          #+#    #+#             */
/*   Updated: 2019/04/04 01:01:38 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		main(int ac, char **av)
{
	char	c;
	int		fd;

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &c, 1))
		ft_putchar(c);
	close(fd);
	return (0);
}
