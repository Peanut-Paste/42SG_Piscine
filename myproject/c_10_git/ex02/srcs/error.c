/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:46:53 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/12 15:46:54 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_error(char *path)
{
	char	*program_name;
	char	*base;
	char	*error_msg;
	
	program_name = "ft_tail: ";
	base = basename(path);
	error_msg = strerror(errno);
	put_str(program_name);
	put_str(MSG1);
	put_str(base);
	put_str(MSG2);
	put_str(error_msg);
	write(1, "\n", 1);
}
