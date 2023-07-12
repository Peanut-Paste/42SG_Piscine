/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:43:00 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/26 16:47:34 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
int     main(void)
{
        char *test = "HELLO";
        char *test2 = "THIS HAS SMALL LETTERS";
        char *test3 = "numbers!123";

        int     result;
        int     result2;
        int     result3;

        result = ft_str_is_uppercase(test);
        result2 = ft_str_is_uppercase(test2);
        result3 = ft_str_is_uppercase(test3);
        printf("%d\n%d\n%d\n", result, result2, result3);
        return 0;
}*/
