/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:31:21 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/27 13:18:42 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = aux;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	size;
	int	*ptr;
	int	c[5];
	int	j;

	size = 4;
	c[0] = 1;
	c[1] = 2;
	c[2] = 3;
	c[3] = 4;
	j = 0;
	ptr = c;
	ft_rev_int_tab(ptr, size);
	while (j < size)
	{
		printf("%d", c[j]);
		j++;
	}
	return (0);
}*/
