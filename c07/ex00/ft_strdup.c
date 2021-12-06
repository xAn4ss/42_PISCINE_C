/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:24:16 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/11 17:45:34 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*copie;

	i = 0;
	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	copie = malloc(sizeof(char) * (size + 1));
	if (copie == NULL)
		return (NULL);
	while (i < size)
	{
		copie[i] = src[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}
/*int main()
{
	char src[] = "123";

	printf("%s", ft_strdup(src));
}*/
