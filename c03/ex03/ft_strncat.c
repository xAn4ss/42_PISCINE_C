/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:21:44 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/02 15:21:21 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				nbr;
	unsigned int	i;

	i = 0;
	nbr = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[nbr + i] = src[i];
		i++;
	}
	dest[nbr + i] = '\0';
	return (dest);
}
