/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:30:11 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/27 14:19:43 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_alphanu(char *str, int i)
{
	if (str[i - 1] >= 32 && str[i - 1] <= 47)
		return (0);
	else if (str[i - 1] >= 58 && str[i - 1] <= 64)
		return (0);
	else if (str[i - 1] >= 91 && str[i - 1] <= 96)
		return (0);
	else if (str[i - 1] >= 123 && str[i - 1] <= 126)
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (check_if_alphanu(str, i) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main()
{	
	char a[] = "salut, comm|nt tu vas ? 42Mots qu[arante-deux; cin1Auante+et+un";
	char *b;
	
	printf("%s\n", a);
	b = ft_strcapitalize(a);
	printf("%s\n", b);
	return 0;
}*/