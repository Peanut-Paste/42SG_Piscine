/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:51:00 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/11 16:51:10 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	get_file_size(int fd, int size)
{
	char	buf;
	
	while (read(fd, &buf, 1) > 0)
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
		print_error_front(path);
		return (NULL);
	}
	size = get_file_size(fd, size);
	close(fd);
	buffer = malloc(size + 1);
	buffer[size] = '\0';
	if (!buffer)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		print_error_front(path);
		return (NULL);
	}
	read(fd, buffer, size);
	close(fd);
	return (buffer);
}

int	print_files(int count, char **paths)
{
	int	i;
	char	*file;
	
	i = 1;
	while (i < count)
	{
		file = read_file(paths[i]);
		if (file)
			put_str(file);
		free(file);
		i++;
	}
	return (0);
}

void	ft_memset(char *buffer, int count)
{
	int	i;
	
	i = 0;
	while (i++ < count)
		buffer[i] = '\0';
}

void	printinput(void)
{
	size_t	byte_read;
	char	buffer[1024];
	int	i;
	char	temp[254];
	
	byte_read = read(0, buffer, 1024);
	while (byte_read)
	{
		i = 0;
		while (buffer[i] > 0)
		{
			if (buffer[i] == '\n')
			{
				temp[i] = '\0';
				put_str(temp);
				write(1, "\n", 1);
			}
			temp[i] = buffer[i];
			i++;
		}
		ft_memset(buffer, byte_read);
		byte_read = read(0, buffer, 1024);
	}
}
