/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:53:45 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/26 11:20:25 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	into_units(int i, int j, int k, int length)
{
	char	cadena[5000];

	cadena[length++] = '0' + i;
	cadena[length++] = '0' + j;
	cadena[length++] = '0' + k;
	if (i == 7 && j == 8 && k == 9)
	{
		cadena[length++] = '\n';
	}
	else
	{
		cadena[length++] = ',';
		cadena[length++] = ' ';
	}
	write (1, cadena, length);
	k++;
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	length;

	i = 0;
	j = 1;
	k = 2;
	length = 0;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				into_units(i, j, k, length);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}

/*int	main(void)
{
	ft_print_comb();
	write (1, "\n", 1);
	return (0);
}*/
