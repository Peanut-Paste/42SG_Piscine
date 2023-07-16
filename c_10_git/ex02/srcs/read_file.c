/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:21:27 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/12 15:21:29 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	get_file_size(int fd, int size)
{
	char	temp;
	
	while (read(fd, &temp, 1) > 0)
	{
		size++;
	}
	return (size);
}

char	*read_file(char *path)
{
	int	fd;
	int	size;
	char	*buffer;
	
	size = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		print_error(path);
		return (NULL);
	}
	size = get_file_size(fd, size);
	close(fd);
	buffer = malloc(size + 1);
	if (!buffer)
		return (NULL);
	buffer[size] = '\0';
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		print_error(path);
		return (NULL);
	}
	read(fd, buffer, size);
	return (buffer);
}

void	write_multiple(int count, char **paths)
{
	char	**temp;
	char	*buffer;
	int	i;
	
	i = 1;
	while (i < count)
	{
		print_title(paths[i]);
		buffer = read_file(paths[i]);
		if (buffer)
		{
			temp = get_reverse_array(buffer);
			put_array(temp);
		}	
		if (i + 1 != count)
			write(1, "\n", 1);
		free(buffer);
		free(temp);
		i++;
	}
}

void	write_files(int count, char **paths)
{
	char	**temp;
	char	*buffer;
	
	if (count == 2)
	{
		buffer = read_file(paths[1]);
		if (buffer)
		{
			temp = get_reverse_array(buffer);
			put_array(temp);
			free(temp);
		}
		free(buffer);
	}
	else
		write_multiple(count, paths);
}
