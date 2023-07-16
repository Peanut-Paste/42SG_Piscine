/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 04:43:31 by jingtan           #+#    #+#             */
/*   Updated: 2023/07/06 14:47:34 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	l_str;
	int	l_to_find;
	int	i;
	int	x;

	l_str = get_length(str);
	l_to_find = get_length(to_find);
	if (l_to_find == 0)
		return (str);
	i = 0;
	while (i <= (l_str - l_to_find))
	{	
		x = 0;
		while (str[i + x] == to_find[x] && to_find[x] != '\0')
			x++;
		if (to_find[x] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

//int	main(int argc, char **argv)
int	main()
{
	//if (argc < 3 || argc > 3)
		//return (0);
	char	test[] = "hello this is what I am finding, te";
	char	testcase[] = "test";
	//char	*a = ft_strstr(argv[1], argv[2]);
	char	*b = ft_strstr(test, testcase);	
	//printf("%s\n", ft_strstr(argv[1], argv[2]));
	printf("%s", b);
	return (0);
}
