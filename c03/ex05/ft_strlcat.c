/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:01:44 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/03 17:14:42 by aoukhart         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && len_dest + i < (size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}	
	dest[len_dest + i] = '\0';
	if (size > len_dest)
		return (len_src + len_dest);
	else
		return (len_src + size);
}
