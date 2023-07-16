/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:14:37 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/17 00:20:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_char(unsigned char letter)
{
	char	*hexdecimal;

	hexdecimal = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexdecimal[letter / 16], 1);
	write(1, &hexdecimal[letter % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
			get_char(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
