/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:54:51 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/03 16:39:06 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_errors(char *base, int *error)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*error = 1;
	while (base[i] != '\0' && *error != 1)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*error = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32
			|| base[i] > 126)
			*error = 1;
		else
			i++;
	}
	*error = 0;
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		size;
	int		error;

	nb = nbr;
	size = 0;
	error = 0;
	check_errors(base, &error);
	if (error == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[size] != '\0')
			size++;
		if (nb < size)
			ft_putchar(base[nb]);
		if (nb >= size)
		{
			ft_putnbr_base((nb / size), base);
			ft_putnbr_base((nb % size), base);
		}
	}
}
