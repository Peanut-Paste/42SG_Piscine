/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 09:15:29 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/28 16:06:57 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return ('c');
}

int	main(void)
{
	char *a = "Hello";
	char b[15];
	char c;
	int i;

	c = ft_strncpy(b, a, 10);
	write(1, &c, 1);
	/*for (i = 0; c[i] != '\0'; i++)
		write(1, &c[i], 1);
	write(1, "\n", 1);	
	for (i = 0; c[i] != '\0'; i++)
		write(1, &c[i], 1);*/
	return 0;
}
