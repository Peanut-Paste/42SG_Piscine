/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:02:55 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/11 17:23:02 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	c;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		c = i + 1;
		if (base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[c] != '\0')
		{
			if (base[i] == base[c])
				return (0);
			c++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		num;
	long	lnbr;

	lnbr = nbr;
	num = check_base(base);
	if (num != 0)
	{
		if (lnbr < 0)
		{
			write(1, "-", 1);
			lnbr *= -1;
		}
		if (lnbr >= num)
		{
			ft_putnbr_base((lnbr / num), base);
			write(1, &base[lnbr % num], 1);
			lnbr -= lnbr;
		}
		else
			write(1, &base[lnbr], 1);
	}
}

int	main(void)
{
	ft_putnbr_base(58, "0123456789ABCDE");
}
