/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:49:34 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/10 09:57:50 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_pos(int nb, int sz_base, char *base)
{
	char	c[10];
	int		i;

	i = 0;
	while (nb != 0)
	{
		c[i] = base[nb % sz_base];
		nb = nb / sz_base;
		i++;
	}
	while (i > 0)
	{
		write(1, &c[i - 1], 1);
		i--;
	}
}

void	ft_putnbr(int nb, int sz_base, char *base)
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
		write(1, &base[0], 1);
		return ;
	}
	if (nb >= 0)
		ft_putnbr_pos(nb, sz_base, base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;
	int	sz_base;

	sz_base = 0;
	while (base[sz_base] != '\0')
		sz_base++;
	if (base[0] == '\0' || base[1] == '\0')
		return ;
	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		i++;
	}
	ft_putnbr(nbr, sz_base, base);
}
/*
int	main(void)
{
	ft_putnbr_base(123, "poneyvif");
	return (0);
}*/
