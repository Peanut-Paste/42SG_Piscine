/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:25:02 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/05 16:34:24 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	add_string_to_db(char **db, char *str, int start, int end)
{
	int		i;
	int		c;
	char	*new_string;
	
	new_string = malloc(sizeof(char) * (end - start));
	i = start;
	c = 0;
	while (i < end)
	{
		new_string[c] = str[i];
		i++;
		c++;
	}
	new_string[c] = '\0';
	*db = new_string;
}

int	count_total_strings(char *str, char *charset)
{
	int	i;
	int	x;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == charset[x])
			x++;
		if (charset[x] == '\0')
		{	
			if (i != 0)
				c++;
			i += x;
		}
		i++;
	}
	if (charset[x] != '\0')
		c++;
	return (c);
}

/*void	brain(char *str, char *charset, **db)
{

}*/

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	x;
	int	c;
	int	y;
	char	**db;
	
	if (str[0] == '\0')
		return (0);
	db = malloc(sizeof(char *) * count_total_strings(str, charset));
	if (!db)
		return (0);
	if (charset[0] == '\0')
	{
		db[0] = str;
		db[1] = 0;
		return (db);
	}
	i = 0;
	c = 0;
	y = 0;
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == charset[x])
			x++;
		if (charset[x] == '\0')
		{
			if (i != 0)
			{
				add_string_to_db(&db[y], str, c, i);
				y++;
			}
			i += x;
			c += (i + x);
		}
		i++;
	}
	if (charset[x] != '\0')
		add_string_to_db(&db[y], str, c, i);
	db[y] = 0;
	return (db);
}
