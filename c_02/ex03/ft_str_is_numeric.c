/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:12:42 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/26 16:34:18 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *test = "this is not a number";
	char *test2 = "this has string and number 1";
	char *test3 = "19";
	int	test1int;
	int	test2int;
	int	test3int;
	test1int = ft_str_is_numeric(test);
	test2int = ft_str_is_numeric(test2);
	test3int = ft_str_is_numeric(test3);
	printf("%d \n%d \n%d\n", test1int, test2int, test3int);
	return (0);
}*/
