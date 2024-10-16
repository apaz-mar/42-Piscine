/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:55:22 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/27 11:24:02 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	div = &a;
	mod = &b;
	a = -568;
	b = 0;
	if (b != 0)
	{
		ft_div_mod(a, b, div, mod);
		printf("%d\n", *div);
		printf("%d\n", *mod);
	}
	else
	{
		printf("Denominador cero");
	}	
	return (0);
}*/
