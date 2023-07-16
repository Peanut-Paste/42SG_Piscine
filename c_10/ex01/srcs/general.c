/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:38:15 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/11 17:38:18 by jingtan          ###   ########.fr       */
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

void	print_error_front(char	*path)
{
	char	*program_name;
	char	*file_name;
	char	*error_message;
	
	program_name = "ft_cat: ";
	file_name = basename(path);
	error_message = strerror(errno);
	put_str(program_name);
	put_str(file_name);
	put_str(": ");
	put_str(error_message);
	put_str("\n");
}
