/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:17:11 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/12 16:17:13 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	count_words(char *str)
{
	int	i;
	int	c;
	
	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			c++;
		i++;
	}
	if (str[i - 1] != '\n')
		c++;
	return (c);
}

int	count_len(char *str)
{
	int	i;

	i = 0;
	while (i == 0 || (str[i] != '\n' && str[i] != '\0'))
		i++;
	return (i);
}

char	*get_string(char *str)
{
	int	i;
	char	*temp;
	
	i = 0;
	if (str[i] == '\n')
	{
		temp = malloc(2);
		temp[0] = '\n';
		temp[1] = '\0';
		return (temp);
	}
	temp = malloc(count_len(str) + 2);
	while (str[i] != '\n' && str[i] != '\0')
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = str[i];
	temp[i + 1] = '\0';
	return (temp);
}

char	**get_reverse_array(char *str)
{
	char	**temp;
	int	new_line;
	int	size;
	
	size = count_words(str);
	temp = malloc(sizeof(char *) * (size + 1));
	temp[size] = 0;
	new_line = 0;
	while (*str && size >= 0)
	{	
		temp[size - 1] = get_string(str);
		size--;
		new_line = 0;
		while (new_line == 0 && *str)
		{
			if (*str == '\n')
				new_line = 1;
			str++;
		}
	}
	return (temp);
}
