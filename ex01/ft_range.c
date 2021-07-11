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

int	*ft_wirte_numbers (int *dest, int min, int max)
{
	int	c;

	c = min;
	while (min < max)
	{
		dest[c] = min;
		c++;
		min++;
	}
	return (dest);
}

int	*ft_range(int min, int max)
{
	int	*dest;

	dest = malloc(max - min);
	if (min > max)
	{
		dest = 0;
		return (dest);
	}
	else
		return (ft_wirte_numbers(dest, min, max));
}
