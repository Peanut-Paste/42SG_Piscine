/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:06:49 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/29 00:26:44 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	char	number;

	number = 48;
	while (number <= 57)
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
