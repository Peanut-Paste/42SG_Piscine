/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:46:38 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/11 16:50:49 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		printinput();
	else
	{
		print_files(argc, argv);
	}
	return (0);
}