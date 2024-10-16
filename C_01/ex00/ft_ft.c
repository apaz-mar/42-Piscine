/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:18:04 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/26 12:39:38 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>

int main(void)
{
	int	a;
	int*	nbr;

	nbr = &a;
	ft_ft(nbr);
	printf("%d", a);
	// write(1, nbr, 2); 
	return (0);
}*/
