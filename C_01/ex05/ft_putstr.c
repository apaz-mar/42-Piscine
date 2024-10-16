/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:32:33 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/27 11:56:31 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(1, str, length); 
}

/*int	main(void)
{
	char	c[4];
	char	*ptr;	

	c[0] = 'a';
	c[1] = 'b';
	c[2] = 'c';
	ptr = c;
	ft_putstr(ptr);
	return (0);
}*/
