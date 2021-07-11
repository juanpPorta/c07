/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 07:59:43 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 08:18:28 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
		return (0);
	else
	{
		size = max - min;
		*range = (int *)malloc(sizeof(int) * size);
		i = 0;
		while (min < max)
		{
			range[0][i] = min;
			i++;
			min++;
		}
		return (size);
	}
}
