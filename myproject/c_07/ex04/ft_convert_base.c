/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:25:06 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/11 17:26:18 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_isspace(char letter);
int	check_base(char *base);
int	get_new_size(int nbr, char *base_to);

int	get_int(char letter, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (letter == base[i])
			return (i);
		i++;
	}
	return (-1);
}

char	*convert_to_base_to(int nbr, char *base_to)
{
	char	*new_str;
	int		i;
	int		counter;

	i = nbr;
	counter = get_new_size(nbr, base_to);
	new_str = malloc(sizeof(char) * counter);
	if (!new_str)
		return (0);
	while ((counter - 1) >= 0)
	{	
		new_str[counter - 1] = base_to[i % check_base(base_to)];
		i /= check_base(base_to);
		counter--;
	}
	new_str[get_new_size(nbr, base_to)] = '\0';
	return (new_str);
}

char	*get_result(char *str, char *base_from, char *base_to)
{
	int		total;

	total = 0;
	while (get_int(*str, base_from) >= 0)
	{
		total = (total * check_base(base_from) + get_int(*str, base_from));
		str++;
	}
	return (convert_to_base_to(total, base_to));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			i;
	int			is_negative;
	char		*result;

	if (check_base(base_from) != 0 && check_base(base_to) != 0)
	{
		i = 0;
		is_negative = 1;
		while (check_isspace(nbr[i]))
			i++;
		while (nbr[i] == '+' || nbr[i] == '-')
		{
			if (nbr[i] == '-')
				is_negative *= -1;
			i++;
		}
		result = get_result(&nbr[i], base_from, base_to);
		if (result != 0)
			return (result);
		free(result);
	}
	return (0);
}

int	main(void)
{
	printf("%s\n", ft_convert_base("     ----7F", "0123456789ABCDEF", "01"));
	return (0);
}
