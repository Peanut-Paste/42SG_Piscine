/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:19:50 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/12 15:19:59 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	put_str(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_title(char *path)
{
	char	*title;
	
	title = basename(path);
	put_str("==> ");
	put_str(title);
	put_str(" <==");
	write(1, "\n", 1);
}

int	count_array(char **str)
{
	int	i;
	
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	put_array(char **str)
{
	int	i;
	int	size;
	
	size = count_array(str);
	if (size > 10)
	{
		i = 9;
		while (i >= 0)
		{
			put_str(str[i]);
			i--;
		}
	}
	else
	{
		while (size > 0)
		{
			put_str(str[size - 1]);
			size--;
		}
	}
}

void	put_stdin_array(char **str)
{
	int	i;
	int	size;
	
	size = count_array(str);
	if (size > 10)
	{
		i = 9;
		while (i >= 0)
		{
			put_str(str[i]);
			i--;
		}
	}
	else
	{
		while (size > 0)
		{
			put_str(str[size - 1]);
			size--;
		}
	}
}
