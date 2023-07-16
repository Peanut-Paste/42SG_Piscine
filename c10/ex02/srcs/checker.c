/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:02:18 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/13 02:02:22 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	count_arglen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_for_arg(int argc, char **argv)
{
	int	i;
	int	x;
	
	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x + 1])
		{
			if (argv[i][x] == '-')
			{
				if (argv[i][x + 1] == 'c')
					return (1);
			}
			x++;
		}
		i++;
	}
	return (0);
}

int	check_one_arg(char *arg)
{
	char	a;
	
	a = arg[0];
	if (count_arglen(arg) == 1)
	{
		if (a == '+' || a == '-' || a == '#' || a == ';')
			return (1);
	}
	return (0);
}

int	check_num(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_num_arg(int argc, char **argv)
{
	int	i;
	
	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
