/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:20:33 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/27 15:08:21 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	j;
	int	k;

	aux = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		while (k < size)
		{
			if (tab[k] < tab[j])
			{
				aux = tab[j];
				tab[j] = tab[k];
				tab[k] = aux;
			}
			k++;
		}
		k = j + 1;
		j++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	size;
	int	i;
	int	c[5];
	
	size = 4;
	i = 0;
	c[0] = 5;
	c[1] = 7;
	c[2] = 2;
	c[3] = 1;
	tab = c;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", c[i]);
		i++;
	}
	return (0);
}*/
