/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 04:21:04 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/03 23:16:40 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	int	digit;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar ('-');
		ft_putnbr (-nb);
	}
	else if (nb > 9)
	{
		digit = nb % 10;
		nb = nb / 10;
		ft_putnbr (nb);
		ft_putchar(digit + '0');
	}
	else
		ft_putchar (nb + '0');
}
