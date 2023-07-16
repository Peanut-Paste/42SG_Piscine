/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:36:54 by marvin            #+#    #+#             */
/*   Updated: 2023/07/16 20:36:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nbr(int nbr, int count)
{
	char	temp;

	if (count == 0 && nbr < 10)
	{
		temp = nbr + '0';
		write(1, "0", 1);
		write(1, &temp, 1);
		return ;
	}
	else if (nbr > 9)
	{
		put_nbr(nbr / 10, count += 1);
		put_nbr(nbr % 10, count += 1);
		return ;
	}
	else
	{
		temp = nbr + '0';
		write(1, &temp, 1);
		return ;
	}
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			put_nbr(first, 0);
			write(1, " ", 1);
			put_nbr(second, 0);
			if (first != 98 || second != 99)
				write(1, ", ", 2);
			second++;
		}
		first += 1;
	}
}
