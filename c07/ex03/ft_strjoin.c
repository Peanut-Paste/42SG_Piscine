/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:29:34 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/17 12:02:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	c;
	int	x;

	i = 0;
	c = 0;
	while (i < size)
	{	
		x = 0;
		while (strs[i][x] != '\0')
		{	
			c++;
			x++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	c += (1 + (i * (size - 1)));
	return (c);
}

void	add_string(char *new_string, char *str)
{
	int	i;
	int	c;

	i = 0;
	while (new_string[i] != '\0')
		i++;
	c = 0;
	while (str[c] != '\0')
	{
		new_string[i + c] = str[c];
		c++;
	}
	new_string[i + c] = '\0';
}

void	brain(char *new_string, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		add_string(new_string, strs[i]);
		if ((size - i) > 1)
			add_string(new_string, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_string;

	if (size <= 0)
	{
		new_string = malloc(sizeof(char));
		new_string = '\0';
		return (new_string);
	}
	new_string = malloc(sizeof(char) * get_total_size(size, strs, sep) + 1);
	if (!new_string)
		return (0);
	new_string[0] = '\0';
	brain(new_string, strs, sep, size);
	return (new_string);
}
