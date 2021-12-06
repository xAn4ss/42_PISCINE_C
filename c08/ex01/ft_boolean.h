/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:31:21 by aoukhart          #+#    #+#             */
/*   Updated: 2021/10/13 18:36:35 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define EVEN(nbr)	(nbr % 2) == 0
# define TRUE	1
# define FALSE	0
# define SUCCESS	0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"
typedef int	t_bool;

#endif
