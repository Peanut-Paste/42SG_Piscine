/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:05:36 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/13 04:25:35 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

void	put_str(char *str);
void	print_error(char *path);
void	write_files(int count, char **paths);
void	put_array(char **str);
char	**get_reverse_array(char *str);
void	print_title(char *path);
int	get_file_size(int fd, int size);
void	print_input(void);
void	put_stdin_array(char **str);
int	check_for_arg(int argc, char **argv);
int	check_one_arg(char *arg);
int	check_num_arg(int argc, char **argv);

#define MSG1 "cannot open '"
#define MSG2 "' for reading: "

#endif
