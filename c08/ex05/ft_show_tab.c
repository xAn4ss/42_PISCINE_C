/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:24:56 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/13 17:15:09 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}

char	putnbr(int nbr)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else
	{
		if (nb < 10)
			ft_putchar((nb % 10) + '0');
		else
		{
			putnbr(nb / 10);
			putnbr(nb % 10);
		}
	}
	return (nb);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != '\0')
	{
		putstr(par[i].str);
		ft_putchar('\n');
		putnbr(par[i].size);
		ft_putchar('\n');
		putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
