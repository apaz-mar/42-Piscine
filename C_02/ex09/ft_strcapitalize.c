/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:42:07 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:20 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] - 'A' + 'a';
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_start;

	word_start = 0;
	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
			word_start = 0;
		else if (word_start == 0) 
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
			word_start = 1;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*result;

	//str[0] = '-';
	//str[1] = 'b';
	//str[2] = 'C';
	//str[3] = '-';
	//str[4] = 'e';
	result = ft_strcapitalize(str);
	printf("%s\n", result);
	return (0);
}*/
