/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:47:06 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/06 21:47:58 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*duplicate_string(char *str)
{
	char	*new_string;
	int		i;

	new_string = malloc(sizeof(char) * get_len(str) + 1);
	if (!new_string)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		new_string[i] = str[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*s;

	s = malloc((1 + ac) * sizeof(t_stock_str));
	if (!s)
		return (0);
	i = 0;
	while (i < ac)
	{
		s[i].size = get_len(av[i]);
		s[i].str = av[i];
		s[i].copy = duplicate_string(av[i]);
		i++;
	}
	s[i].str = 0;
	return (s);
}
