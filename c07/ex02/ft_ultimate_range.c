/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 06:28:30 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/17 12:02:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	c = max - min;
	array = malloc(sizeof(int) * c);
	if (!array)
		return (-1);
	i = 0;
	while (i < c)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (c);
}
