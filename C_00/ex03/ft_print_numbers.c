/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:06:12 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/26 11:16:02 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	write(1, &digit, 1);
	while (digit < '9')
	{
		digit = digit + 1;
		write(1, &digit, 1);
	}
}

/*int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 1);
	return (0);
}*/
