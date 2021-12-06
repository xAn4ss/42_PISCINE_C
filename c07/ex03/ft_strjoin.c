/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:28:31 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/13 14:19:17 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
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
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len = len + ((size - 1) * ft_strlen(sep));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_len(size, strs, sep);
	if (size == 0)
	{	
		str = malloc(1);
		str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	*str = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[len] = '\0';
	return (str);
}
int main(int ac, char **av)
{
	char* str[] ={"saad", "m9wd", "bzaf", ""};
	printf("%s", ft_strjoin(2, str, " ,"));
	return (0);
}
