/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:45:53 by marvin            #+#    #+#             */
/*   Updated: 2023/07/16 20:53:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		put_char('-');
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
		put_char(lnb % 10 + '0');
	}
	else
		put_char(lnb + '0');
}
