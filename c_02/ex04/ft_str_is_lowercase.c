/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:35:28 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/26 16:42:16 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *test = "hello";
	char *test2 = "this has Capital letter";
	char *test3 = "numbers!123";

	int	result;
	int	result2;
	int	result3;

	result = ft_str_is_lowercase(test);
	result2 = ft_str_is_lowercase(test2);
	result3 = ft_str_is_lowercase(test3);
	printf("%d\n%d\n%d\n", result, result2, result3);
	return 0;
}*/
