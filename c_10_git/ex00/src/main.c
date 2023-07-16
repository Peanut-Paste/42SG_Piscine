/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 23:26:32 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/11 00:30:50 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	put_str(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		str++;
	}
}

void	read_file(char *filepath)
{
	int		fd;
	char	buffer[1024];
	int		i;

	fd = open(filepath, O_RDONLY);
	if (fd < 0)
		put_str(2, CANNOTREAD);
	i = 0;
	while (i < 1024)
	{
		buffer[i] = '\0';
		i++;
	}
	read(fd, buffer, 1024);
	close(fd);
	put_str(1, buffer);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		put_str(2, NOARGUMENT);
	else if (argc > 2)
		put_str(2, MORETHANONE);
	else
		read_file(argv[1]);
	return (0);
}
