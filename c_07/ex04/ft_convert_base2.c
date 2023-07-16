/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:25:25 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/05 14:09:55 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_isspace(char letter)
{
	if (letter == ' ' || letter == '\n' || letter == '\t')
		return (1);
	else if (letter == '\v' || letter == '\f' || letter == '\r')
		return (1);
	else
		return (0);
}

int	check_base(char *base)
{
	int	i;
	int	c;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		c = i + 1;
		if (base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[c] != '\0')
		{
			if (base[i] == base[c])
				return (0);
			c++;
		}
		i++;
	}
	return (i);
}

int	get_new_size(int nbr, char *base_to)
{
	int	size;

	size = 1;
	while (nbr > check_base(base_to))
	{
		nbr /= check_base(base_to);
		size++;
	}
	return (size);
}
