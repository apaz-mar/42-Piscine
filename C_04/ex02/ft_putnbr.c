/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:26:07 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/03 21:20:56 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_pos(int nb)
{
	char	c[10];
	int		i;

	i = 0;
	while (nb != 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &c[i - 1], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb > 0)
		ft_putnbr_pos(nb);
}
/*
int	main(void)
{
	int	nb;

	//nb = 2147483647;
	//nb = 0;
	//nb = 50;
	//nb = 123;
	//nb = -2147483648;
	nb = -1000;
	ft_putnbr(nb);
	return (0);
}*/
