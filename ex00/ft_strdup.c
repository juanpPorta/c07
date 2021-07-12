/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 03:10:28 by jporta            #+#    #+#             */
/*   Updated: 2021/07/12 20:33:52 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;
	int		a;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{	
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(src) + 1);
	if (!(dest = malloc(sizeof(src) + 1)))
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
