/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:20:52 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/03 18:56:47 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_is_space(char letter)
{
	if (letter == ' ' || letter == '\n' || letter == '\t')
		return (0);
	else if (letter == '\v' || letter == '\f' || letter == '\r')
		return (0);
	else
		return (1);
}

int	get_total(int total, int counter)
{
	if ((counter % 2) != 0)
		return (total * -1);
	else
		return (total);
}

int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	total;

	i = 0;
	c = 0;
	total = 0;
	while (check_is_space(str[i]) != 1)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			c++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		total = (total * 10) + (str[i] - 48);
		i++;
	}
	if (total != 0)
		return (get_total(total, c));
	return (0);
}
