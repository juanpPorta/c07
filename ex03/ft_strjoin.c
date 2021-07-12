/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:30:39 by jporta            #+#    #+#             */
/*   Updated: 2021/07/12 20:51:21 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			c;
	char		*dest;
	int			w;

	i = 0;
	c = 0;
	w = 0;
	dest = malloc(sizeof(*strs) * size);
	while (i < size)
	{
		w = 0;
		while (strs[i][w] != '\0')
		{
			dest[c++] = strs[i][w++];
		}
		w = 0;
		while (sep[w] != '\0')
		{
			dest[c++] = sep[w++];
		}
		i++;
	}
	dest[c - 1] = '\0';
	return (dest);
}
