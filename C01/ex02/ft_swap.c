/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:45:25 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/23 15:08:12 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	printf("original value of x %d\n", x);
	printf("original value of y %d\n", y);
	ft_swap(&x, &y);
	printf("New value of x %d\n", x);
	printf("New value of y %d\n", y);
	return (0);
}
*/
