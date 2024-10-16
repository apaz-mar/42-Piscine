/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:18:10 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/27 11:31:07 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	den;
	int	rest;

	den = *a / *b;
	rest = *a % *b;
	*a = den;
	*b = rest;
}

/*#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	a = &c;
	b = &d;
	c = -42;
	d = 0;
	if (d != 0)
	{
		ft_ultimate_div_mod(a, b);
		printf("%d\n", *a);
		printf("%d\n", *b);
	}
	else
	{
		printf("Denominador cero");
	}
	return (0);
}*/
