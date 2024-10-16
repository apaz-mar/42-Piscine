/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:23:34 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/26 11:14:06 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	write(1, &c, 1);
	while (c > 'a')
	{
		c = c - 1;
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	write (1, "\n", 1);
}*/
