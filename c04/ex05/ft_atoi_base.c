/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:18:50 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/12 22:28:22 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_isspace(char letter)
{
	if (letter == ' ' || letter == '\n' || letter == '\t')
		return (1);
	else if (letter == '\v' || letter == '\f' || letter == '\r')
		return (1);
	else
		return (0);
}

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

int	get_int(char letter, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (letter == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	getting_total(char *str, char *base, int num, int index)
{
	int	total;
	int	i;

	i = index;
	total = 0;
	while (get_int(str[i], base) >= 0)
	{
		total = (total * num) + get_int(str[i], base);
		i++;
	}
	return (total);
}	

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_negative;
	int	num;

	num = (check_base(base));
	if (num != 0)
	{
		i = 0;
		is_negative = 1;
		while (check_isspace(str[i]))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				is_negative *= -1;
			i++;
		}
		return (getting_total(str, base, num, i) * is_negative);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_atoi_base("BBB", "ABCD"));
}
