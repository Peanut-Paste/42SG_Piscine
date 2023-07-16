/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:50:45 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/04 12:03:54 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_string(int argc, char *str[]);
int		checker(char *argv[], int index);
void	change_pointer(char *argv[], int index);

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	if (argc < 2)
	{
		write_string(argc, argv);
		return (0);
	}
	c = 1;
	while (c < argc)
	{
		i = 1;
		while (i < (argc - 1))
		{
			if (checker(argv, i) > 0)
				change_pointer(argv, i);
			i++;
		}
		c++;
	}
	write_string(argc, argv);
	return (0);
}

void	write_string(int argc, char *str[])
{
	int	i;
	int	c;

	c = 1;
	while (c < argc)
	{	
		i = 0;
		while (str[c][i] != '\0')
		{
			write(1, &str[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c++;
	}
}

int	checker(char *argv[], int index)
{
	int	i;

	i = 0;
	while (argv[index][i] != '\0' || argv[index + 1][i] != '\0')
	{
		if (argv[index][i] != argv[index + 1][i])
			return (argv[index][i] - argv[index + 1][i]);
		i++;
	}
	return (0);
}

void	change_pointer(char *argv[], int index)
{
	char	*temp;

	temp = argv[index + 1];
	argv[index + 1] = argv[index];
	argv[index] = temp;
}

/*void	bubble_sort(char *argv[], int index)
{
	int	x;
	char	temp[];

	x = 0;
	while (argv[index + 1][x] != '\0')
	{
		temp = argv[index + 1][x];
		x++;
	}
	x = 0;
	while (argv[index][x] != '\0')
	{
	        argv[i + 1][x] = argv[i][x];
		x++;
	}
	x = 0;
	while (temp[x] != '\0')
	{
		
	}

}*/
