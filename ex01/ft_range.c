/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 07:07:47 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 07:15:16 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	dest = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
