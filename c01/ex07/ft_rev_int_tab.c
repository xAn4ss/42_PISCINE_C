/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:13:16 by aoukhart          #+#    #+#             */
/*   Updated: 2021/09/28 17:08:39 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_rev_int_tab(int	*tab, int	size)
{
	int	swap;
	int	i;
	int	siz;

	i = 0;
	siz = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[siz];
		tab[siz] = swap;
		i++;
		siz--;
	}
}
