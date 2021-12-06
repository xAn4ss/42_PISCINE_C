/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:45:11 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/02 21:25:43 by aoukhart         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[nbr + i] = src[i];
		i++;
	}
	dest[nbr + i] = '\0';
	return (dest);
}
