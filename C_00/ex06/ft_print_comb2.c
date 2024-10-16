/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:53:45 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/26 11:22:49 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	into_units(int i, int j, int length)
{
	char	cadena[5000];

	cadena[length++] = '0' + i / 10;
	cadena[length++] = '0' + i % 10;
	cadena[length++] = ' ';
	cadena[length++] = '0' + j / 10;
	cadena[length++] = '0' + j % 10;
	if (i == 98 && j == 99)
	{
		cadena[length++] = '\n';
	}
	else
	{
		cadena[length++] = ',';
		cadena[length++] = ' ';
	}
	write (1, cadena, length);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 1;
	length = 0;
	while (i <= 98)
	{
		while (j <= 99)
		{
			into_units(i, j, length);
			j++;
		}
		i++;
		j = i + 1;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	write (1, "\n", 1);
	return (0);
}*/
