/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 01:55:45 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/28 16:25:20 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	c = 0;
	while (dest[c] != '\0')
		c++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char str1[100] = "Hellooooo";
	char str2[] = "this is Isaac";
	char *a;

	printf("str1 before function: %s\n", str1);
	a = ft_strcat(str1, str2);
	printf("This is str1 after function: %s\n", str1);
	printf("This is pointer a after function: %s\n", a);
}*/
