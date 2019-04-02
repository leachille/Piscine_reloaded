/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:46:42 by lachille          #+#    #+#             */
/*   Updated: 2019/04/02 16:48:35 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	n = nb - 1;
	while (n >= 1)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
