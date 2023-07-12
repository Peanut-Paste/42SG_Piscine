/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:55:44 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/28 15:58:35 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	while (src[c])
		c++;
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}
/*
int	main()
{
	char *a = "1234567890";
	char b[13] = "fghijkl";
	unsigned int x;

	printf("%s\n", b);
	x = ft_strlcpy(b, a, 4);
	printf("%s\n", b);
	printf("%d\n", x);
	return (0);
}*/
