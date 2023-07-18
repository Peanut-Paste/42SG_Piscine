/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:35:10 by marvin            #+#    #+#             */
/*   Updated: 2023/07/18 19:09:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_array;
	int	i;

	new_array = malloc(sizeof(int) * length);
	if (!new_array)
		return (0);
	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		new_array[i] = tab[i];
		i++;
	}
	return (new_array);
}
