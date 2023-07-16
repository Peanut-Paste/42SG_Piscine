/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:29:23 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/25 02:06:08 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	oi;

	oi = 0;
	while (oi <= size)
	{	
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		oi++;
	}
}
/*
int	main(void)
{
	int i;
	int a[5] = {5, 4, 3, 2, 1};
	for (i = 0; i < 5; i++)
		printf("%d \n", a[i]);
	printf("\n\n");
	ft_sort_int_tab(a, 5);
	for (i = 0; i < 5; i++)
		printf("%d \n", a[i]);
}*/
