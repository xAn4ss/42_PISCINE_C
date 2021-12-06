/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:28:21 by aoukhart          #+#    #+#             */
/*   Updated: 2021/09/30 08:56:50 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
char	*ft_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_uppercase(&str[0]);
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			str[i] = str[i] + 32;
		}
		if (str[i - 1] < '0' || str[i - 1] > '9' )
			if (str[i - 1] < 'A' || str[i - 1] > 'Z')
				if (str[i - 1] < 'a' || str[i - 1] > 'z')
					ft_uppercase(&str[i]);
		i++;
	}
	return (str);
}
