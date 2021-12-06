/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:22:46 by aoukhart          #+#    #+#             */
/*   Updated: 2021/09/30 15:40:25 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	nbr;

	i = 0;
	nbr = 0;
	while (src[nbr] != '\0')
	{
		nbr++;
	}
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (nbr);
}
