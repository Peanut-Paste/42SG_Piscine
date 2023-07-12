/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 04:16:26 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/28 18:20:50 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	while (dest[c])
		c++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char str1[100] = "Helloooo";
	char str2[] = "this is Isaac";
	char *a;

	printf("str1 before function: %s\n", str1);
	a = ft_strncat(str1, str2, 7);
	printf("This is str1 after function: %s\n", str1);
	printf("This is a pointer a after function: %s\n", a);
	return (0);
}*/
