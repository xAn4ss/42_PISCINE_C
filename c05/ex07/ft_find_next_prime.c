/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:48:45 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/12 17:26:30 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
int	ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (nb / 2 >= i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_prime(nb))
	{
		nb++;
	}
	return (nb);
}
//int main()
//{
//	printf("%d", ft_find_next_prime(123456));
//}
