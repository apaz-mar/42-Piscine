/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:24:10 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/26 11:18:14 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0) 
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}

/*int	main(void)
{
	ft_is_negative(0);
	write (1, "\n", 1);
	return (0);
}*/
