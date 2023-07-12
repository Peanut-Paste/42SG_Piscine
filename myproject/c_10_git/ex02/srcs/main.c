/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:05:22 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/13 04:23:47 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char *argv[])
{	
//	if (check_for_arg(argc, argv))

//	else
//	{
	if (argc < 2 || check_one_arg(argv[1]))
		print_input();
	else
		write_files(argc, argv);
	return (0);
}
