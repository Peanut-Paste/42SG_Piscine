/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 00:19:40 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/04 11:55:24 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	total;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		total = nb;
		return (total * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
