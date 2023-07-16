/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:30:44 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/03 23:40:16 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	i;
	int	result;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	i = nb;
	result = 1;
	while (i > 0)
	{	
		result *= i;
		i--;
	}
	return (result);
}
