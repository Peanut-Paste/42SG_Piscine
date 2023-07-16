/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:23:29 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/27 04:01:56 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	temp;

	i = 0;
	while (i < ((size - 1) / 2 + ((size - 1) % 2)))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
void	ft_rev(int *tab, int size)
{
	int i;
	int temp[size];

	i = 0;
	while (i < size)
	{
		temp[i] = tab[size - 1 - i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}

int	main()
{	
	int i;
	int a[] = {1, 2, 3, 4, 5};
	for (i=0; i < 5; i++)
		printf("%d \n", a[i]);
	ft_rev(a, 5);
	for (i=0; i < 5; i++)
		printf("%d", a[i]);
	return 0;
}*/
