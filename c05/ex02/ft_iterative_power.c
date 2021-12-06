/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:19:32 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/05 11:19:24 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		result = 1;
	else
	{
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
//int main()
//{
//	printf("%d", ft_iterative_power(10, 4));
//}
