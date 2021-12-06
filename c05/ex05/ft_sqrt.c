/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:00:02 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/06 10:32:07 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{	
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
			{
				return (sqrt);
			}
			else if (sqrt >= 46341)
			{
				return (0);
			}
			sqrt++;
		}
	}
	return (0);
}
//int main()
//{
//	printf("%d", ft_sqrt(1000000));
//}
