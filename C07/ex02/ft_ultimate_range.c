/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:36:30 by aasharma          #+#    #+#             */
/*   Updated: 2023/07/09 12:34:15 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*total;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	total = (int *)malloc(sizeof(int) * (max - min) - 1);
	if (!total)
		return (-1);
	while (i < (max - min))
	{
		total[i] = min + i;
		i++;
	}
	*range = total;
	return (i);
}
/*
#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int *tab;
	int min;
	int max;
	int size;

	min = 0;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			tab[i];
		}
		printf("%d\n", size);
	}
	else
		printf("tozz");
}
*/
