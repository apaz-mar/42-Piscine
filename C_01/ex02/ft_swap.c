/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:52:26 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/27 15:07:04 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int 	c;
	int	d;

	c = 5;
	d = 9;
	a = &c;
	b = &d;
	printf("%d%d", c, d);
	ft_swap(a, b);
	printf("%d%d", c, d);
	return (0);
}
*/
