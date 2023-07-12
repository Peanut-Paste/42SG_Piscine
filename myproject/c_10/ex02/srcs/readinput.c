/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readinput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:14:46 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/12 19:14:48 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	clear_mem(char *buffer, int count)
{
	int	i;
	
	i = 0;
	while (i < count)
	{
		buffer[i] = '\0';
		i++;
	}
}

char	*read_input(void)
{
	int	byte_size;
	int	buffer_i;
	char	*buffer;
	char	data[1024];
	int	i;
	
	buffer = malloc(1024);
	byte_size = read(0, data, 1024);
	buffer_i = 0;
	while (byte_size)
	{
		i = 0;
		while (i < byte_size)
		{
			buffer[buffer_i] = data[i];
			i++;
			buffer_i++;
		}
		clear_mem(data, byte_size);
		byte_size = read(0, data, 1024);
	}
	return (buffer);
}

void	print_input(void)
{
	char	**temp;
	char	*buffer;
	
	buffer = read_input();
	if (buffer)
	{
		temp = get_reverse_array(buffer);
		put_stdin_array(temp);
		free(temp);
	}
	free(buffer);
}
