/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:26:14 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/05 12:15:36 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
//int main()
//{
//	printf("%d", ft_iterative_factorial(5));
//}
