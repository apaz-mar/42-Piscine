/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:06:42 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/03 18:23:11 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (&str[i]);
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (str[i + j] == to_find[j] && str[i + j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
//The  strcat() function appends the src string to the dest string, over‐
//writing the terminating null byte ('\0') at the end of dest,  and  then
//adds  a  terminating  null  byte.  The strings may not overlap, and the
//dest string must have enough space for the  result.   If  dest  is  not
//large  enough, program behavior is unpredictable;
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Test Spain";
	char	b[] = "";

	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(a, b));
	return (0);
}*/
