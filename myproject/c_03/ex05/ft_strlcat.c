/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 04:05:07 by jingtan           #+#    #+#             */
/*   Updated: 2023/06/29 04:11:54 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_total_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_c;
	unsigned int	src_c;
	unsigned int	i;
	unsigned int	i2;

	dest_c = get_total_length(dest);
	src_c = get_total_length(src);
	if (size == 0 || dest_c >= size)
		return (size + src_c);
	i = 0;
	i2 = dest_c;
	while (src[i] != '\0' && i < (size - dest_c - 1))
	{
		dest[i2] = src[i];
		i++;
		i2++;
	}
	dest[i2] = '\0';
	return (dest_c + src_c);
}

/*
int main()
{
	char a[10] = "Hello";
	char *b = "Helloooo";
	unsigned int test;

	printf("Before: %s\n", a);
	test = ft_strlcat(a, b, 3);
	printf("%ld\n", sizeof(a));
	printf("After: %s\n", a);
	printf("Value: %d\n", test);
	return (0);
}*/
