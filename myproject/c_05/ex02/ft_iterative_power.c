/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 23:48:29 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/04 00:18:45 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	total = nb;
	while (power > 1)
	{
		total *= nb;
		power--;
	}
	return (total);
}
