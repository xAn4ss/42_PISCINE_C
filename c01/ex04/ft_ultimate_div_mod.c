/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:11:54 by aoukhart          #+#    #+#             */
/*   Updated: 2021/09/27 16:11:27 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	D;
	int	M;

	D = *a / *b;
	M = *a % *b;
	*a = D;
	*b = M;
}
