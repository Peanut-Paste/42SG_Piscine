/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:53:50 by marvin            #+#    #+#             */
/*   Updated: 2023/07/16 23:59:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_power(int nbr)
{
	int		total;

	total = 1;
	if (nbr > 0)
		total = total * 10 * get_power(nbr - 1);
	return (total);
}

void	put_nbr(int nbr, int count, int power)
{
	char	temp;

	if (nbr < power && count == 0)
	{
		while (power > nbr)
		{
			write(1, "0", 1);
			power /= 10;
		}
	}
	if (nbr > 9)
	{
		put_nbr(nbr / 10, count += 1, power);
		temp = nbr % 10 + '0';
		write(1, &temp, 1);
	}
	else
	{
		temp = nbr % 10 + '0';
		write(1, &temp, 1);
	}
}

int	checker(int nbr, int n)
{
	while (get_power(n) > 1)
	{
		if (nbr / get_power(n) % 10 >= (nbr / get_power(n - 1) % 10))
			return (0);
		n--;
	}
	return (1);
}

int	get_nextnbr(int total, int nb)
{
	while (get_power(nb) > 1)
	{
		while (total / get_power(nb) % 10 >= total / get_power(nb - 1) % 10)
			total += 1 * get_power(nb - 1);
		nb--;
	}
	return (total);
}

void	ft_print_combn(int n)
{
	int	i;
	int	nb;

	i = 1;
	while (i < get_power(n))
	{
		while (!checker(i, n - 1))
			i = get_nextnbr(i, n - 1);
		if (i < get_power(n))
			put_nbr(i, 0, get_power(n) / 10);
		nb = i + 1;
		while (!checker(nb, n - 1))
			nb = get_nextnbr(nb, n - 1);
		if (nb < get_power(n))
			write(1, ", ", 2);
		i++;
	}
}
