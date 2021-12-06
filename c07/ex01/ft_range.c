/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:23:26 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/11 15:52:46 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*int	main()
{
	int max = 10;
	int min = 1;
	int i = 0;
	int	*tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
